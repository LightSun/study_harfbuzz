package com.heaven7.android.glew.app;

import android.app.Activity;
import android.opengl.GLES20;
import android.opengl.GLES30;
import android.opengl.GLSurfaceView;
import android.util.Log;

import java.io.ByteArrayOutputStream;
import java.io.InputStream;

import javax.microedition.khronos.opengles.GL10;

public abstract class IGLRender implements GLSurfaceView.Renderer {

    protected final Activity context;

    public IGLRender(Activity context) {
        this.context = context;
    }

    protected int mProgram;

    public int getRenderMode(){
        return GLSurfaceView.RENDERMODE_CONTINUOUSLY;
    }

    public int getEGLVersion(){
        return 3;
    }

    public void setUp(Runnable next){
        next.run();
    }

    public GLSurfaceView createGLSurfaceView(Activity activity) {
        return new GLSurfaceView(activity);
    }

    public void loadAndLinkShaderFromAssets(String vertexPath, String fragPath){
        String vertex = loadTextFromAsset(vertexPath);
        String frag = loadTextFromAsset(fragPath);
        linkProgram(vertex, frag);
    }

    public int linkProgram(String vertexShader, String fragShader){
        int verS = GLES20.glCreateShader(GLES20.GL_VERTEX_SHADER);
        if (verS != 0) {
            GLES20.glShaderSource(verS, vertexShader);
            GLES20.glCompileShader(verS);
        }else {
            throw new IllegalStateException("glCreateShader(GL_VERTEX_SHADER) error");
        }

        int fragS = GLES20.glCreateShader(GLES20.GL_FRAGMENT_SHADER);
        if (fragS != 0) {
            GLES20.glShaderSource(fragS, fragShader);
            GLES20.glCompileShader(fragS);
        }else {
            throw new IllegalStateException("glCreateShader(GL_FRAGMENT_SHADER) error");
        }
        mProgram = GLES20.glCreateProgram();
        if (mProgram != 0) {
            GLES20.glAttachShader(mProgram, verS);
            GLES20.glAttachShader(mProgram, fragS);
            GLES20.glLinkProgram(mProgram);
        }else {
            throw new IllegalStateException("glCreateProgram error");
        }
        return mProgram;
    }

    public String loadTextFromAsset(String fname) {
        String result = null;
        try {
            InputStream in = context.getAssets().open(fname);
            int ch = 0;
            ByteArrayOutputStream baos = new ByteArrayOutputStream();
            while ((ch = in.read()) != -1) {
                baos.write(ch);
            }
            byte[] buff = baos.toByteArray();
            baos.close();
            in.close();
            result = new String(buff, "UTF-8");
            result = result.replaceAll("\\r\\n", "\n");
        } catch (Exception e) {
            e.printStackTrace();
        }
        return result;
    }

    public static void checkGlError(String glOperation) {
        int error;
        while ((error = GLES30.glGetError()) != GLES30.GL_NO_ERROR) {
            Log.e("IGLRender", glOperation + ": glError " + error);
            throw new RuntimeException(glOperation + ": glError " + error);
        }
    }

    public void onDestroy() {

    }
}
