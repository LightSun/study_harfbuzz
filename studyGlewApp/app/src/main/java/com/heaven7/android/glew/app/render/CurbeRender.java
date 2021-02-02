package com.heaven7.android.glew.app.render;

import android.app.Activity;
import android.opengl.GLES30;
import android.opengl.GLSurfaceView;
import android.opengl.Matrix;

import com.heaven7.android.glew.app.IGLRender;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class CurbeRender extends IGLRender {

    private int mWidth;
    private int mHeight;

    private Cube mCube;

    private float mAngle =0;
    private float mTransY=0;
    private float mTransX=0;
    private static final float Z_NEAR = 1f;
    private static final float Z_FAR = 40f;

    // mMVPMatrix is an abbreviation for "Model View Projection Matrix"
    private final float[] mMVPMatrix = new float[16];
    private final float[] mProjectionMatrix = new float[16];
    private final float[] mViewMatrix = new float[16];
    private final float[] mRotationMatrix = new float[16];

    public CurbeRender(Activity context) {
        super(context);
    }

    @Override
    public GLSurfaceView createGLSurfaceView(Activity activity) {
        GLSurfaceView view = new GLSurfaceView(activity);
        view.setEGLConfigChooser(8, 8, 8, 8, 16, 0);
        return view;
    }
    @Override
    public int getRenderMode() {
        return GLSurfaceView.RENDERMODE_CONTINUOUSLY;
    }

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        //set the clear buffer color to light gray.
        GLES30.glClearColor(0.9f, .9f, 0.9f, 0.9f);
        mCube = new Cube(this);
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {
        mWidth = width;
        mHeight = height;
        // Set the viewport
        GLES30.glViewport(0, 0, mWidth, mHeight);
        float aspect = (float) width / height;

        // this projection matrix is applied to object coordinates
        //no idea why 53.13f, it was used in another example and it worked.
        Matrix.perspectiveM(mProjectionMatrix, 0, 53.13f, aspect, Z_NEAR, Z_FAR);
    }

    @Override
    public void onDrawFrame(GL10 gl) {
        // Clear the color buffer  set above by glClearColor.
        GLES30.glClear(GLES30.GL_COLOR_BUFFER_BIT | GLES30.GL_DEPTH_BUFFER_BIT);

        //need this otherwise, it will over right stuff and the cube will look wrong!
        GLES30.glEnable(GLES30.GL_DEPTH_TEST);

        // Set the camera position (View matrix)  note Matrix is an include, not a declared method.
        Matrix.setLookAtM(mViewMatrix, 0, 0, 0, -3, 0f, 0f, 0f, 0f, 1.0f, 0.0f);

        // Create a rotation and translation for the cube
        Matrix.setIdentityM(mRotationMatrix, 0);

        //move the cube up/down and left/right
        Matrix.translateM(mRotationMatrix, 0, mTransX, mTransY, 0);

        //mangle is how fast, x,y,z which directions it rotates.
        Matrix.rotateM(mRotationMatrix, 0, mAngle, 1.0f, 1.0f, 1.0f);

        // combine the model with the view matrix
        Matrix.multiplyMM(mMVPMatrix, 0, mViewMatrix, 0, mRotationMatrix, 0);

        // combine the model-view with the projection matrix
        Matrix.multiplyMM(mMVPMatrix, 0, mProjectionMatrix, 0, mMVPMatrix, 0);

        mCube.draw(mMVPMatrix);

        //change the angle, so the cube will spin.
        mAngle += 0.4;
    }

    //used the touch listener to move the cube up/down (y) and left/right (x)
    public float getY() {
        return mTransY;
    }

    public void setY(float mY) {
        mTransY = mY;
    }

    public float getX() {
        return mTransX;
    }

    public void setX(float mX) {
        mTransX = mX;
    }

}
