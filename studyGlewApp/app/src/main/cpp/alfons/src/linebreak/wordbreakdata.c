/* The content of this file is generated from:
# WordBreakProperty-7.0.0.txt
# Date: 2014-02-19, 15:51:39 GMT [MD]
*/

#include "wordbreakdef.h"

static struct WordBreakProperties wb_prop_default[] = {
	{0x000A, 0x000A, WBP_LF},
	{0x000B, 0x000C, WBP_Newline},
	{0x000D, 0x000D, WBP_CR},
	{0x0022, 0x0022, WBP_Double_Quote},
	{0x0027, 0x0027, WBP_Single_Quote},
	{0x002C, 0x002C, WBP_MidNum},
	{0x002E, 0x002E, WBP_MidNumLet},
	{0x0030, 0x0039, WBP_Numeric},
	{0x003A, 0x003A, WBP_MidLetter},
	{0x003B, 0x003B, WBP_MidNum},
	{0x0041, 0x005A, WBP_ALetter},
	{0x005F, 0x005F, WBP_ExtendNumLet},
	{0x0061, 0x007A, WBP_ALetter},
	{0x0085, 0x0085, WBP_Newline},
	{0x00AA, 0x00AA, WBP_ALetter},
	{0x00AD, 0x00AD, WBP_Format},
	{0x00B5, 0x00B5, WBP_ALetter},
	{0x00B7, 0x00B7, WBP_MidLetter},
	{0x00BA, 0x00BA, WBP_ALetter},
	{0x00C0, 0x00D6, WBP_ALetter},
	{0x00D8, 0x00F6, WBP_ALetter},
	{0x00F8, 0x01BA, WBP_ALetter},
	{0x01BB, 0x01BB, WBP_ALetter},
	{0x01BC, 0x01BF, WBP_ALetter},
	{0x01C0, 0x01C3, WBP_ALetter},
	{0x01C4, 0x0293, WBP_ALetter},
	{0x0294, 0x0294, WBP_ALetter},
	{0x0295, 0x02AF, WBP_ALetter},
	{0x02B0, 0x02C1, WBP_ALetter},
	{0x02C6, 0x02D1, WBP_ALetter},
	{0x02D7, 0x02D7, WBP_MidLetter},
	{0x02E0, 0x02E4, WBP_ALetter},
	{0x02EC, 0x02EC, WBP_ALetter},
	{0x02EE, 0x02EE, WBP_ALetter},
	{0x0300, 0x036F, WBP_Extend},
	{0x0370, 0x0373, WBP_ALetter},
	{0x0374, 0x0374, WBP_ALetter},
	{0x0376, 0x0377, WBP_ALetter},
	{0x037A, 0x037A, WBP_ALetter},
	{0x037B, 0x037D, WBP_ALetter},
	{0x037E, 0x037E, WBP_MidNum},
	{0x037F, 0x037F, WBP_ALetter},
	{0x0386, 0x0386, WBP_ALetter},
	{0x0387, 0x0387, WBP_MidLetter},
	{0x0388, 0x038A, WBP_ALetter},
	{0x038C, 0x038C, WBP_ALetter},
	{0x038E, 0x03A1, WBP_ALetter},
	{0x03A3, 0x03F5, WBP_ALetter},
	{0x03F7, 0x0481, WBP_ALetter},
	{0x0483, 0x0487, WBP_Extend},
	{0x0488, 0x0489, WBP_Extend},
	{0x048A, 0x052F, WBP_ALetter},
	{0x0531, 0x0556, WBP_ALetter},
	{0x0559, 0x0559, WBP_ALetter},
	{0x0561, 0x0587, WBP_ALetter},
	{0x0589, 0x0589, WBP_MidNum},
	{0x0591, 0x05BD, WBP_Extend},
	{0x05BF, 0x05BF, WBP_Extend},
	{0x05C1, 0x05C2, WBP_Extend},
	{0x05C4, 0x05C5, WBP_Extend},
	{0x05C7, 0x05C7, WBP_Extend},
	{0x05D0, 0x05EA, WBP_Hebrew_Letter},
	{0x05F0, 0x05F2, WBP_Hebrew_Letter},
	{0x05F3, 0x05F3, WBP_ALetter},
	{0x05F4, 0x05F4, WBP_MidLetter},
	{0x0600, 0x0605, WBP_Format},
	{0x060C, 0x060D, WBP_MidNum},
	{0x0610, 0x061A, WBP_Extend},
	{0x061C, 0x061C, WBP_Format},
	{0x0620, 0x063F, WBP_ALetter},
	{0x0640, 0x0640, WBP_ALetter},
	{0x0641, 0x064A, WBP_ALetter},
	{0x064B, 0x065F, WBP_Extend},
	{0x0660, 0x0669, WBP_Numeric},
	{0x066B, 0x066B, WBP_Numeric},
	{0x066C, 0x066C, WBP_MidNum},
	{0x066E, 0x066F, WBP_ALetter},
	{0x0670, 0x0670, WBP_Extend},
	{0x0671, 0x06D3, WBP_ALetter},
	{0x06D5, 0x06D5, WBP_ALetter},
	{0x06D6, 0x06DC, WBP_Extend},
	{0x06DD, 0x06DD, WBP_Format},
	{0x06DF, 0x06E4, WBP_Extend},
	{0x06E5, 0x06E6, WBP_ALetter},
	{0x06E7, 0x06E8, WBP_Extend},
	{0x06EA, 0x06ED, WBP_Extend},
	{0x06EE, 0x06EF, WBP_ALetter},
	{0x06F0, 0x06F9, WBP_Numeric},
	{0x06FA, 0x06FC, WBP_ALetter},
	{0x06FF, 0x06FF, WBP_ALetter},
	{0x070F, 0x070F, WBP_Format},
	{0x0710, 0x0710, WBP_ALetter},
	{0x0711, 0x0711, WBP_Extend},
	{0x0712, 0x072F, WBP_ALetter},
	{0x0730, 0x074A, WBP_Extend},
	{0x074D, 0x07A5, WBP_ALetter},
	{0x07A6, 0x07B0, WBP_Extend},
	{0x07B1, 0x07B1, WBP_ALetter},
	{0x07C0, 0x07C9, WBP_Numeric},
	{0x07CA, 0x07EA, WBP_ALetter},
	{0x07EB, 0x07F3, WBP_Extend},
	{0x07F4, 0x07F5, WBP_ALetter},
	{0x07F8, 0x07F8, WBP_MidNum},
	{0x07FA, 0x07FA, WBP_ALetter},
	{0x0800, 0x0815, WBP_ALetter},
	{0x0816, 0x0819, WBP_Extend},
	{0x081A, 0x081A, WBP_ALetter},
	{0x081B, 0x0823, WBP_Extend},
	{0x0824, 0x0824, WBP_ALetter},
	{0x0825, 0x0827, WBP_Extend},
	{0x0828, 0x0828, WBP_ALetter},
	{0x0829, 0x082D, WBP_Extend},
	{0x0840, 0x0858, WBP_ALetter},
	{0x0859, 0x085B, WBP_Extend},
	{0x08A0, 0x08B2, WBP_ALetter},
	{0x08E4, 0x0902, WBP_Extend},
	{0x0903, 0x0903, WBP_Extend},
	{0x0904, 0x0939, WBP_ALetter},
	{0x093A, 0x093A, WBP_Extend},
	{0x093B, 0x093B, WBP_Extend},
	{0x093C, 0x093C, WBP_Extend},
	{0x093D, 0x093D, WBP_ALetter},
	{0x093E, 0x0940, WBP_Extend},
	{0x0941, 0x0948, WBP_Extend},
	{0x0949, 0x094C, WBP_Extend},
	{0x094D, 0x094D, WBP_Extend},
	{0x094E, 0x094F, WBP_Extend},
	{0x0950, 0x0950, WBP_ALetter},
	{0x0951, 0x0957, WBP_Extend},
	{0x0958, 0x0961, WBP_ALetter},
	{0x0962, 0x0963, WBP_Extend},
	{0x0966, 0x096F, WBP_Numeric},
	{0x0971, 0x0971, WBP_ALetter},
	{0x0972, 0x0980, WBP_ALetter},
	{0x0981, 0x0981, WBP_Extend},
	{0x0982, 0x0983, WBP_Extend},
	{0x0985, 0x098C, WBP_ALetter},
	{0x098F, 0x0990, WBP_ALetter},
	{0x0993, 0x09A8, WBP_ALetter},
	{0x09AA, 0x09B0, WBP_ALetter},
	{0x09B2, 0x09B2, WBP_ALetter},
	{0x09B6, 0x09B9, WBP_ALetter},
	{0x09BC, 0x09BC, WBP_Extend},
	{0x09BD, 0x09BD, WBP_ALetter},
	{0x09BE, 0x09C0, WBP_Extend},
	{0x09C1, 0x09C4, WBP_Extend},
	{0x09C7, 0x09C8, WBP_Extend},
	{0x09CB, 0x09CC, WBP_Extend},
	{0x09CD, 0x09CD, WBP_Extend},
	{0x09CE, 0x09CE, WBP_ALetter},
	{0x09D7, 0x09D7, WBP_Extend},
	{0x09DC, 0x09DD, WBP_ALetter},
	{0x09DF, 0x09E1, WBP_ALetter},
	{0x09E2, 0x09E3, WBP_Extend},
	{0x09E6, 0x09EF, WBP_Numeric},
	{0x09F0, 0x09F1, WBP_ALetter},
	{0x0A01, 0x0A02, WBP_Extend},
	{0x0A03, 0x0A03, WBP_Extend},
	{0x0A05, 0x0A0A, WBP_ALetter},
	{0x0A0F, 0x0A10, WBP_ALetter},
	{0x0A13, 0x0A28, WBP_ALetter},
	{0x0A2A, 0x0A30, WBP_ALetter},
	{0x0A32, 0x0A33, WBP_ALetter},
	{0x0A35, 0x0A36, WBP_ALetter},
	{0x0A38, 0x0A39, WBP_ALetter},
	{0x0A3C, 0x0A3C, WBP_Extend},
	{0x0A3E, 0x0A40, WBP_Extend},
	{0x0A41, 0x0A42, WBP_Extend},
	{0x0A47, 0x0A48, WBP_Extend},
	{0x0A4B, 0x0A4D, WBP_Extend},
	{0x0A51, 0x0A51, WBP_Extend},
	{0x0A59, 0x0A5C, WBP_ALetter},
	{0x0A5E, 0x0A5E, WBP_ALetter},
	{0x0A66, 0x0A6F, WBP_Numeric},
	{0x0A70, 0x0A71, WBP_Extend},
	{0x0A72, 0x0A74, WBP_ALetter},
	{0x0A75, 0x0A75, WBP_Extend},
	{0x0A81, 0x0A82, WBP_Extend},
	{0x0A83, 0x0A83, WBP_Extend},
	{0x0A85, 0x0A8D, WBP_ALetter},
	{0x0A8F, 0x0A91, WBP_ALetter},
	{0x0A93, 0x0AA8, WBP_ALetter},
	{0x0AAA, 0x0AB0, WBP_ALetter},
	{0x0AB2, 0x0AB3, WBP_ALetter},
	{0x0AB5, 0x0AB9, WBP_ALetter},
	{0x0ABC, 0x0ABC, WBP_Extend},
	{0x0ABD, 0x0ABD, WBP_ALetter},
	{0x0ABE, 0x0AC0, WBP_Extend},
	{0x0AC1, 0x0AC5, WBP_Extend},
	{0x0AC7, 0x0AC8, WBP_Extend},
	{0x0AC9, 0x0AC9, WBP_Extend},
	{0x0ACB, 0x0ACC, WBP_Extend},
	{0x0ACD, 0x0ACD, WBP_Extend},
	{0x0AD0, 0x0AD0, WBP_ALetter},
	{0x0AE0, 0x0AE1, WBP_ALetter},
	{0x0AE2, 0x0AE3, WBP_Extend},
	{0x0AE6, 0x0AEF, WBP_Numeric},
	{0x0B01, 0x0B01, WBP_Extend},
	{0x0B02, 0x0B03, WBP_Extend},
	{0x0B05, 0x0B0C, WBP_ALetter},
	{0x0B0F, 0x0B10, WBP_ALetter},
	{0x0B13, 0x0B28, WBP_ALetter},
	{0x0B2A, 0x0B30, WBP_ALetter},
	{0x0B32, 0x0B33, WBP_ALetter},
	{0x0B35, 0x0B39, WBP_ALetter},
	{0x0B3C, 0x0B3C, WBP_Extend},
	{0x0B3D, 0x0B3D, WBP_ALetter},
	{0x0B3E, 0x0B3E, WBP_Extend},
	{0x0B3F, 0x0B3F, WBP_Extend},
	{0x0B40, 0x0B40, WBP_Extend},
	{0x0B41, 0x0B44, WBP_Extend},
	{0x0B47, 0x0B48, WBP_Extend},
	{0x0B4B, 0x0B4C, WBP_Extend},
	{0x0B4D, 0x0B4D, WBP_Extend},
	{0x0B56, 0x0B56, WBP_Extend},
	{0x0B57, 0x0B57, WBP_Extend},
	{0x0B5C, 0x0B5D, WBP_ALetter},
	{0x0B5F, 0x0B61, WBP_ALetter},
	{0x0B62, 0x0B63, WBP_Extend},
	{0x0B66, 0x0B6F, WBP_Numeric},
	{0x0B71, 0x0B71, WBP_ALetter},
	{0x0B82, 0x0B82, WBP_Extend},
	{0x0B83, 0x0B83, WBP_ALetter},
	{0x0B85, 0x0B8A, WBP_ALetter},
	{0x0B8E, 0x0B90, WBP_ALetter},
	{0x0B92, 0x0B95, WBP_ALetter},
	{0x0B99, 0x0B9A, WBP_ALetter},
	{0x0B9C, 0x0B9C, WBP_ALetter},
	{0x0B9E, 0x0B9F, WBP_ALetter},
	{0x0BA3, 0x0BA4, WBP_ALetter},
	{0x0BA8, 0x0BAA, WBP_ALetter},
	{0x0BAE, 0x0BB9, WBP_ALetter},
	{0x0BBE, 0x0BBF, WBP_Extend},
	{0x0BC0, 0x0BC0, WBP_Extend},
	{0x0BC1, 0x0BC2, WBP_Extend},
	{0x0BC6, 0x0BC8, WBP_Extend},
	{0x0BCA, 0x0BCC, WBP_Extend},
	{0x0BCD, 0x0BCD, WBP_Extend},
	{0x0BD0, 0x0BD0, WBP_ALetter},
	{0x0BD7, 0x0BD7, WBP_Extend},
	{0x0BE6, 0x0BEF, WBP_Numeric},
	{0x0C00, 0x0C00, WBP_Extend},
	{0x0C01, 0x0C03, WBP_Extend},
	{0x0C05, 0x0C0C, WBP_ALetter},
	{0x0C0E, 0x0C10, WBP_ALetter},
	{0x0C12, 0x0C28, WBP_ALetter},
	{0x0C2A, 0x0C39, WBP_ALetter},
	{0x0C3D, 0x0C3D, WBP_ALetter},
	{0x0C3E, 0x0C40, WBP_Extend},
	{0x0C41, 0x0C44, WBP_Extend},
	{0x0C46, 0x0C48, WBP_Extend},
	{0x0C4A, 0x0C4D, WBP_Extend},
	{0x0C55, 0x0C56, WBP_Extend},
	{0x0C58, 0x0C59, WBP_ALetter},
	{0x0C60, 0x0C61, WBP_ALetter},
	{0x0C62, 0x0C63, WBP_Extend},
	{0x0C66, 0x0C6F, WBP_Numeric},
	{0x0C81, 0x0C81, WBP_Extend},
	{0x0C82, 0x0C83, WBP_Extend},
	{0x0C85, 0x0C8C, WBP_ALetter},
	{0x0C8E, 0x0C90, WBP_ALetter},
	{0x0C92, 0x0CA8, WBP_ALetter},
	{0x0CAA, 0x0CB3, WBP_ALetter},
	{0x0CB5, 0x0CB9, WBP_ALetter},
	{0x0CBC, 0x0CBC, WBP_Extend},
	{0x0CBD, 0x0CBD, WBP_ALetter},
	{0x0CBE, 0x0CBE, WBP_Extend},
	{0x0CBF, 0x0CBF, WBP_Extend},
	{0x0CC0, 0x0CC4, WBP_Extend},
	{0x0CC6, 0x0CC6, WBP_Extend},
	{0x0CC7, 0x0CC8, WBP_Extend},
	{0x0CCA, 0x0CCB, WBP_Extend},
	{0x0CCC, 0x0CCD, WBP_Extend},
	{0x0CD5, 0x0CD6, WBP_Extend},
	{0x0CDE, 0x0CDE, WBP_ALetter},
	{0x0CE0, 0x0CE1, WBP_ALetter},
	{0x0CE2, 0x0CE3, WBP_Extend},
	{0x0CE6, 0x0CEF, WBP_Numeric},
	{0x0CF1, 0x0CF2, WBP_ALetter},
	{0x0D01, 0x0D01, WBP_Extend},
	{0x0D02, 0x0D03, WBP_Extend},
	{0x0D05, 0x0D0C, WBP_ALetter},
	{0x0D0E, 0x0D10, WBP_ALetter},
	{0x0D12, 0x0D3A, WBP_ALetter},
	{0x0D3D, 0x0D3D, WBP_ALetter},
	{0x0D3E, 0x0D40, WBP_Extend},
	{0x0D41, 0x0D44, WBP_Extend},
	{0x0D46, 0x0D48, WBP_Extend},
	{0x0D4A, 0x0D4C, WBP_Extend},
	{0x0D4D, 0x0D4D, WBP_Extend},
	{0x0D4E, 0x0D4E, WBP_ALetter},
	{0x0D57, 0x0D57, WBP_Extend},
	{0x0D60, 0x0D61, WBP_ALetter},
	{0x0D62, 0x0D63, WBP_Extend},
	{0x0D66, 0x0D6F, WBP_Numeric},
	{0x0D7A, 0x0D7F, WBP_ALetter},
	{0x0D82, 0x0D83, WBP_Extend},
	{0x0D85, 0x0D96, WBP_ALetter},
	{0x0D9A, 0x0DB1, WBP_ALetter},
	{0x0DB3, 0x0DBB, WBP_ALetter},
	{0x0DBD, 0x0DBD, WBP_ALetter},
	{0x0DC0, 0x0DC6, WBP_ALetter},
	{0x0DCA, 0x0DCA, WBP_Extend},
	{0x0DCF, 0x0DD1, WBP_Extend},
	{0x0DD2, 0x0DD4, WBP_Extend},
	{0x0DD6, 0x0DD6, WBP_Extend},
	{0x0DD8, 0x0DDF, WBP_Extend},
	{0x0DE6, 0x0DEF, WBP_Numeric},
	{0x0DF2, 0x0DF3, WBP_Extend},
	{0x0E31, 0x0E31, WBP_Extend},
	{0x0E34, 0x0E3A, WBP_Extend},
	{0x0E47, 0x0E4E, WBP_Extend},
	{0x0E50, 0x0E59, WBP_Numeric},
	{0x0EB1, 0x0EB1, WBP_Extend},
	{0x0EB4, 0x0EB9, WBP_Extend},
	{0x0EBB, 0x0EBC, WBP_Extend},
	{0x0EC8, 0x0ECD, WBP_Extend},
	{0x0ED0, 0x0ED9, WBP_Numeric},
	{0x0F00, 0x0F00, WBP_ALetter},
	{0x0F18, 0x0F19, WBP_Extend},
	{0x0F20, 0x0F29, WBP_Numeric},
	{0x0F35, 0x0F35, WBP_Extend},
	{0x0F37, 0x0F37, WBP_Extend},
	{0x0F39, 0x0F39, WBP_Extend},
	{0x0F3E, 0x0F3F, WBP_Extend},
	{0x0F40, 0x0F47, WBP_ALetter},
	{0x0F49, 0x0F6C, WBP_ALetter},
	{0x0F71, 0x0F7E, WBP_Extend},
	{0x0F7F, 0x0F7F, WBP_Extend},
	{0x0F80, 0x0F84, WBP_Extend},
	{0x0F86, 0x0F87, WBP_Extend},
	{0x0F88, 0x0F8C, WBP_ALetter},
	{0x0F8D, 0x0F97, WBP_Extend},
	{0x0F99, 0x0FBC, WBP_Extend},
	{0x0FC6, 0x0FC6, WBP_Extend},
	{0x102B, 0x102C, WBP_Extend},
	{0x102D, 0x1030, WBP_Extend},
	{0x1031, 0x1031, WBP_Extend},
	{0x1032, 0x1037, WBP_Extend},
	{0x1038, 0x1038, WBP_Extend},
	{0x1039, 0x103A, WBP_Extend},
	{0x103B, 0x103C, WBP_Extend},
	{0x103D, 0x103E, WBP_Extend},
	{0x1040, 0x1049, WBP_Numeric},
	{0x1056, 0x1057, WBP_Extend},
	{0x1058, 0x1059, WBP_Extend},
	{0x105E, 0x1060, WBP_Extend},
	{0x1062, 0x1064, WBP_Extend},
	{0x1067, 0x106D, WBP_Extend},
	{0x1071, 0x1074, WBP_Extend},
	{0x1082, 0x1082, WBP_Extend},
	{0x1083, 0x1084, WBP_Extend},
	{0x1085, 0x1086, WBP_Extend},
	{0x1087, 0x108C, WBP_Extend},
	{0x108D, 0x108D, WBP_Extend},
	{0x108F, 0x108F, WBP_Extend},
	{0x1090, 0x1099, WBP_Numeric},
	{0x109A, 0x109C, WBP_Extend},
	{0x109D, 0x109D, WBP_Extend},
	{0x10A0, 0x10C5, WBP_ALetter},
	{0x10C7, 0x10C7, WBP_ALetter},
	{0x10CD, 0x10CD, WBP_ALetter},
	{0x10D0, 0x10FA, WBP_ALetter},
	{0x10FC, 0x10FC, WBP_ALetter},
	{0x10FD, 0x1248, WBP_ALetter},
	{0x124A, 0x124D, WBP_ALetter},
	{0x1250, 0x1256, WBP_ALetter},
	{0x1258, 0x1258, WBP_ALetter},
	{0x125A, 0x125D, WBP_ALetter},
	{0x1260, 0x1288, WBP_ALetter},
	{0x128A, 0x128D, WBP_ALetter},
	{0x1290, 0x12B0, WBP_ALetter},
	{0x12B2, 0x12B5, WBP_ALetter},
	{0x12B8, 0x12BE, WBP_ALetter},
	{0x12C0, 0x12C0, WBP_ALetter},
	{0x12C2, 0x12C5, WBP_ALetter},
	{0x12C8, 0x12D6, WBP_ALetter},
	{0x12D8, 0x1310, WBP_ALetter},
	{0x1312, 0x1315, WBP_ALetter},
	{0x1318, 0x135A, WBP_ALetter},
	{0x135D, 0x135F, WBP_Extend},
	{0x1380, 0x138F, WBP_ALetter},
	{0x13A0, 0x13F4, WBP_ALetter},
	{0x1401, 0x166C, WBP_ALetter},
	{0x166F, 0x167F, WBP_ALetter},
	{0x1681, 0x169A, WBP_ALetter},
	{0x16A0, 0x16EA, WBP_ALetter},
	{0x16EE, 0x16F0, WBP_ALetter},
	{0x16F1, 0x16F8, WBP_ALetter},
	{0x1700, 0x170C, WBP_ALetter},
	{0x170E, 0x1711, WBP_ALetter},
	{0x1712, 0x1714, WBP_Extend},
	{0x1720, 0x1731, WBP_ALetter},
	{0x1732, 0x1734, WBP_Extend},
	{0x1740, 0x1751, WBP_ALetter},
	{0x1752, 0x1753, WBP_Extend},
	{0x1760, 0x176C, WBP_ALetter},
	{0x176E, 0x1770, WBP_ALetter},
	{0x1772, 0x1773, WBP_Extend},
	{0x17B4, 0x17B5, WBP_Extend},
	{0x17B6, 0x17B6, WBP_Extend},
	{0x17B7, 0x17BD, WBP_Extend},
	{0x17BE, 0x17C5, WBP_Extend},
	{0x17C6, 0x17C6, WBP_Extend},
	{0x17C7, 0x17C8, WBP_Extend},
	{0x17C9, 0x17D3, WBP_Extend},
	{0x17DD, 0x17DD, WBP_Extend},
	{0x17E0, 0x17E9, WBP_Numeric},
	{0x180B, 0x180D, WBP_Extend},
	{0x180E, 0x180E, WBP_Format},
	{0x1810, 0x1819, WBP_Numeric},
	{0x1820, 0x1842, WBP_ALetter},
	{0x1843, 0x1843, WBP_ALetter},
	{0x1844, 0x1877, WBP_ALetter},
	{0x1880, 0x18A8, WBP_ALetter},
	{0x18A9, 0x18A9, WBP_Extend},
	{0x18AA, 0x18AA, WBP_ALetter},
	{0x18B0, 0x18F5, WBP_ALetter},
	{0x1900, 0x191E, WBP_ALetter},
	{0x1920, 0x1922, WBP_Extend},
	{0x1923, 0x1926, WBP_Extend},
	{0x1927, 0x1928, WBP_Extend},
	{0x1929, 0x192B, WBP_Extend},
	{0x1930, 0x1931, WBP_Extend},
	{0x1932, 0x1932, WBP_Extend},
	{0x1933, 0x1938, WBP_Extend},
	{0x1939, 0x193B, WBP_Extend},
	{0x1946, 0x194F, WBP_Numeric},
	{0x19B0, 0x19C0, WBP_Extend},
	{0x19C8, 0x19C9, WBP_Extend},
	{0x19D0, 0x19D9, WBP_Numeric},
	{0x1A00, 0x1A16, WBP_ALetter},
	{0x1A17, 0x1A18, WBP_Extend},
	{0x1A19, 0x1A1A, WBP_Extend},
	{0x1A1B, 0x1A1B, WBP_Extend},
	{0x1A55, 0x1A55, WBP_Extend},
	{0x1A56, 0x1A56, WBP_Extend},
	{0x1A57, 0x1A57, WBP_Extend},
	{0x1A58, 0x1A5E, WBP_Extend},
	{0x1A60, 0x1A60, WBP_Extend},
	{0x1A61, 0x1A61, WBP_Extend},
	{0x1A62, 0x1A62, WBP_Extend},
	{0x1A63, 0x1A64, WBP_Extend},
	{0x1A65, 0x1A6C, WBP_Extend},
	{0x1A6D, 0x1A72, WBP_Extend},
	{0x1A73, 0x1A7C, WBP_Extend},
	{0x1A7F, 0x1A7F, WBP_Extend},
	{0x1A80, 0x1A89, WBP_Numeric},
	{0x1A90, 0x1A99, WBP_Numeric},
	{0x1AB0, 0x1ABD, WBP_Extend},
	{0x1ABE, 0x1ABE, WBP_Extend},
	{0x1B00, 0x1B03, WBP_Extend},
	{0x1B04, 0x1B04, WBP_Extend},
	{0x1B05, 0x1B33, WBP_ALetter},
	{0x1B34, 0x1B34, WBP_Extend},
	{0x1B35, 0x1B35, WBP_Extend},
	{0x1B36, 0x1B3A, WBP_Extend},
	{0x1B3B, 0x1B3B, WBP_Extend},
	{0x1B3C, 0x1B3C, WBP_Extend},
	{0x1B3D, 0x1B41, WBP_Extend},
	{0x1B42, 0x1B42, WBP_Extend},
	{0x1B43, 0x1B44, WBP_Extend},
	{0x1B45, 0x1B4B, WBP_ALetter},
	{0x1B50, 0x1B59, WBP_Numeric},
	{0x1B6B, 0x1B73, WBP_Extend},
	{0x1B80, 0x1B81, WBP_Extend},
	{0x1B82, 0x1B82, WBP_Extend},
	{0x1B83, 0x1BA0, WBP_ALetter},
	{0x1BA1, 0x1BA1, WBP_Extend},
	{0x1BA2, 0x1BA5, WBP_Extend},
	{0x1BA6, 0x1BA7, WBP_Extend},
	{0x1BA8, 0x1BA9, WBP_Extend},
	{0x1BAA, 0x1BAA, WBP_Extend},
	{0x1BAB, 0x1BAD, WBP_Extend},
	{0x1BAE, 0x1BAF, WBP_ALetter},
	{0x1BB0, 0x1BB9, WBP_Numeric},
	{0x1BBA, 0x1BE5, WBP_ALetter},
	{0x1BE6, 0x1BE6, WBP_Extend},
	{0x1BE7, 0x1BE7, WBP_Extend},
	{0x1BE8, 0x1BE9, WBP_Extend},
	{0x1BEA, 0x1BEC, WBP_Extend},
	{0x1BED, 0x1BED, WBP_Extend},
	{0x1BEE, 0x1BEE, WBP_Extend},
	{0x1BEF, 0x1BF1, WBP_Extend},
	{0x1BF2, 0x1BF3, WBP_Extend},
	{0x1C00, 0x1C23, WBP_ALetter},
	{0x1C24, 0x1C2B, WBP_Extend},
	{0x1C2C, 0x1C33, WBP_Extend},
	{0x1C34, 0x1C35, WBP_Extend},
	{0x1C36, 0x1C37, WBP_Extend},
	{0x1C40, 0x1C49, WBP_Numeric},
	{0x1C4D, 0x1C4F, WBP_ALetter},
	{0x1C50, 0x1C59, WBP_Numeric},
	{0x1C5A, 0x1C77, WBP_ALetter},
	{0x1C78, 0x1C7D, WBP_ALetter},
	{0x1CD0, 0x1CD2, WBP_Extend},
	{0x1CD4, 0x1CE0, WBP_Extend},
	{0x1CE1, 0x1CE1, WBP_Extend},
	{0x1CE2, 0x1CE8, WBP_Extend},
	{0x1CE9, 0x1CEC, WBP_ALetter},
	{0x1CED, 0x1CED, WBP_Extend},
	{0x1CEE, 0x1CF1, WBP_ALetter},
	{0x1CF2, 0x1CF3, WBP_Extend},
	{0x1CF4, 0x1CF4, WBP_Extend},
	{0x1CF5, 0x1CF6, WBP_ALetter},
	{0x1CF8, 0x1CF9, WBP_Extend},
	{0x1D00, 0x1D2B, WBP_ALetter},
	{0x1D2C, 0x1D6A, WBP_ALetter},
	{0x1D6B, 0x1D77, WBP_ALetter},
	{0x1D78, 0x1D78, WBP_ALetter},
	{0x1D79, 0x1D9A, WBP_ALetter},
	{0x1D9B, 0x1DBF, WBP_ALetter},
	{0x1DC0, 0x1DF5, WBP_Extend},
	{0x1DFC, 0x1DFF, WBP_Extend},
	{0x1E00, 0x1F15, WBP_ALetter},
	{0x1F18, 0x1F1D, WBP_ALetter},
	{0x1F20, 0x1F45, WBP_ALetter},
	{0x1F48, 0x1F4D, WBP_ALetter},
	{0x1F50, 0x1F57, WBP_ALetter},
	{0x1F59, 0x1F59, WBP_ALetter},
	{0x1F5B, 0x1F5B, WBP_ALetter},
	{0x1F5D, 0x1F5D, WBP_ALetter},
	{0x1F5F, 0x1F7D, WBP_ALetter},
	{0x1F80, 0x1FB4, WBP_ALetter},
	{0x1FB6, 0x1FBC, WBP_ALetter},
	{0x1FBE, 0x1FBE, WBP_ALetter},
	{0x1FC2, 0x1FC4, WBP_ALetter},
	{0x1FC6, 0x1FCC, WBP_ALetter},
	{0x1FD0, 0x1FD3, WBP_ALetter},
	{0x1FD6, 0x1FDB, WBP_ALetter},
	{0x1FE0, 0x1FEC, WBP_ALetter},
	{0x1FF2, 0x1FF4, WBP_ALetter},
	{0x1FF6, 0x1FFC, WBP_ALetter},
	{0x200C, 0x200D, WBP_Extend},
	{0x200E, 0x200F, WBP_Format},
	{0x2018, 0x2018, WBP_MidNumLet},
	{0x2019, 0x2019, WBP_MidNumLet},
	{0x2024, 0x2024, WBP_MidNumLet},
	{0x2027, 0x2027, WBP_MidLetter},
	{0x2028, 0x2028, WBP_Newline},
	{0x2029, 0x2029, WBP_Newline},
	{0x202A, 0x202E, WBP_Format},
	{0x203F, 0x2040, WBP_ExtendNumLet},
	{0x2044, 0x2044, WBP_MidNum},
	{0x2054, 0x2054, WBP_ExtendNumLet},
	{0x2060, 0x2064, WBP_Format},
	{0x2066, 0x206F, WBP_Format},
	{0x2071, 0x2071, WBP_ALetter},
	{0x207F, 0x207F, WBP_ALetter},
	{0x2090, 0x209C, WBP_ALetter},
	{0x20D0, 0x20DC, WBP_Extend},
	{0x20DD, 0x20E0, WBP_Extend},
	{0x20E1, 0x20E1, WBP_Extend},
	{0x20E2, 0x20E4, WBP_Extend},
	{0x20E5, 0x20F0, WBP_Extend},
	{0x2102, 0x2102, WBP_ALetter},
	{0x2107, 0x2107, WBP_ALetter},
	{0x210A, 0x2113, WBP_ALetter},
	{0x2115, 0x2115, WBP_ALetter},
	{0x2119, 0x211D, WBP_ALetter},
	{0x2124, 0x2124, WBP_ALetter},
	{0x2126, 0x2126, WBP_ALetter},
	{0x2128, 0x2128, WBP_ALetter},
	{0x212A, 0x212D, WBP_ALetter},
	{0x212F, 0x2134, WBP_ALetter},
	{0x2135, 0x2138, WBP_ALetter},
	{0x2139, 0x2139, WBP_ALetter},
	{0x213C, 0x213F, WBP_ALetter},
	{0x2145, 0x2149, WBP_ALetter},
	{0x214E, 0x214E, WBP_ALetter},
	{0x2160, 0x2182, WBP_ALetter},
	{0x2183, 0x2184, WBP_ALetter},
	{0x2185, 0x2188, WBP_ALetter},
	{0x24B6, 0x24E9, WBP_ALetter},
	{0x2C00, 0x2C2E, WBP_ALetter},
	{0x2C30, 0x2C5E, WBP_ALetter},
	{0x2C60, 0x2C7B, WBP_ALetter},
	{0x2C7C, 0x2C7D, WBP_ALetter},
	{0x2C7E, 0x2CE4, WBP_ALetter},
	{0x2CEB, 0x2CEE, WBP_ALetter},
	{0x2CEF, 0x2CF1, WBP_Extend},
	{0x2CF2, 0x2CF3, WBP_ALetter},
	{0x2D00, 0x2D25, WBP_ALetter},
	{0x2D27, 0x2D27, WBP_ALetter},
	{0x2D2D, 0x2D2D, WBP_ALetter},
	{0x2D30, 0x2D67, WBP_ALetter},
	{0x2D6F, 0x2D6F, WBP_ALetter},
	{0x2D7F, 0x2D7F, WBP_Extend},
	{0x2D80, 0x2D96, WBP_ALetter},
	{0x2DA0, 0x2DA6, WBP_ALetter},
	{0x2DA8, 0x2DAE, WBP_ALetter},
	{0x2DB0, 0x2DB6, WBP_ALetter},
	{0x2DB8, 0x2DBE, WBP_ALetter},
	{0x2DC0, 0x2DC6, WBP_ALetter},
	{0x2DC8, 0x2DCE, WBP_ALetter},
	{0x2DD0, 0x2DD6, WBP_ALetter},
	{0x2DD8, 0x2DDE, WBP_ALetter},
	{0x2DE0, 0x2DFF, WBP_Extend},
	{0x2E2F, 0x2E2F, WBP_ALetter},
	{0x3005, 0x3005, WBP_ALetter},
	{0x302A, 0x302D, WBP_Extend},
	{0x302E, 0x302F, WBP_Extend},
	{0x3031, 0x3035, WBP_Katakana},
	{0x303B, 0x303B, WBP_ALetter},
	{0x303C, 0x303C, WBP_ALetter},
	{0x3099, 0x309A, WBP_Extend},
	{0x309B, 0x309C, WBP_Katakana},
	{0x30A0, 0x30A0, WBP_Katakana},
	{0x30A1, 0x30FA, WBP_Katakana},
	{0x30FC, 0x30FE, WBP_Katakana},
	{0x30FF, 0x30FF, WBP_Katakana},
	{0x3105, 0x312D, WBP_ALetter},
	{0x3131, 0x318E, WBP_ALetter},
	{0x31A0, 0x31BA, WBP_ALetter},
	{0x31F0, 0x31FF, WBP_Katakana},
	{0x32D0, 0x32FE, WBP_Katakana},
	{0x3300, 0x3357, WBP_Katakana},
	{0xA000, 0xA014, WBP_ALetter},
	{0xA015, 0xA015, WBP_ALetter},
	{0xA016, 0xA48C, WBP_ALetter},
	{0xA4D0, 0xA4F7, WBP_ALetter},
	{0xA4F8, 0xA4FD, WBP_ALetter},
	{0xA500, 0xA60B, WBP_ALetter},
	{0xA60C, 0xA60C, WBP_ALetter},
	{0xA610, 0xA61F, WBP_ALetter},
	{0xA620, 0xA629, WBP_Numeric},
	{0xA62A, 0xA62B, WBP_ALetter},
	{0xA640, 0xA66D, WBP_ALetter},
	{0xA66E, 0xA66E, WBP_ALetter},
	{0xA66F, 0xA66F, WBP_Extend},
	{0xA670, 0xA672, WBP_Extend},
	{0xA674, 0xA67D, WBP_Extend},
	{0xA67F, 0xA67F, WBP_ALetter},
	{0xA680, 0xA69B, WBP_ALetter},
	{0xA69C, 0xA69D, WBP_ALetter},
	{0xA69F, 0xA69F, WBP_Extend},
	{0xA6A0, 0xA6E5, WBP_ALetter},
	{0xA6E6, 0xA6EF, WBP_ALetter},
	{0xA6F0, 0xA6F1, WBP_Extend},
	{0xA717, 0xA71F, WBP_ALetter},
	{0xA722, 0xA76F, WBP_ALetter},
	{0xA770, 0xA770, WBP_ALetter},
	{0xA771, 0xA787, WBP_ALetter},
	{0xA788, 0xA788, WBP_ALetter},
	{0xA78B, 0xA78E, WBP_ALetter},
	{0xA790, 0xA7AD, WBP_ALetter},
	{0xA7B0, 0xA7B1, WBP_ALetter},
	{0xA7F7, 0xA7F7, WBP_ALetter},
	{0xA7F8, 0xA7F9, WBP_ALetter},
	{0xA7FA, 0xA7FA, WBP_ALetter},
	{0xA7FB, 0xA801, WBP_ALetter},
	{0xA802, 0xA802, WBP_Extend},
	{0xA803, 0xA805, WBP_ALetter},
	{0xA806, 0xA806, WBP_Extend},
	{0xA807, 0xA80A, WBP_ALetter},
	{0xA80B, 0xA80B, WBP_Extend},
	{0xA80C, 0xA822, WBP_ALetter},
	{0xA823, 0xA824, WBP_Extend},
	{0xA825, 0xA826, WBP_Extend},
	{0xA827, 0xA827, WBP_Extend},
	{0xA840, 0xA873, WBP_ALetter},
	{0xA880, 0xA881, WBP_Extend},
	{0xA882, 0xA8B3, WBP_ALetter},
	{0xA8B4, 0xA8C3, WBP_Extend},
	{0xA8C4, 0xA8C4, WBP_Extend},
	{0xA8D0, 0xA8D9, WBP_Numeric},
	{0xA8E0, 0xA8F1, WBP_Extend},
	{0xA8F2, 0xA8F7, WBP_ALetter},
	{0xA8FB, 0xA8FB, WBP_ALetter},
	{0xA900, 0xA909, WBP_Numeric},
	{0xA90A, 0xA925, WBP_ALetter},
	{0xA926, 0xA92D, WBP_Extend},
	{0xA930, 0xA946, WBP_ALetter},
	{0xA947, 0xA951, WBP_Extend},
	{0xA952, 0xA953, WBP_Extend},
	{0xA960, 0xA97C, WBP_ALetter},
	{0xA980, 0xA982, WBP_Extend},
	{0xA983, 0xA983, WBP_Extend},
	{0xA984, 0xA9B2, WBP_ALetter},
	{0xA9B3, 0xA9B3, WBP_Extend},
	{0xA9B4, 0xA9B5, WBP_Extend},
	{0xA9B6, 0xA9B9, WBP_Extend},
	{0xA9BA, 0xA9BB, WBP_Extend},
	{0xA9BC, 0xA9BC, WBP_Extend},
	{0xA9BD, 0xA9C0, WBP_Extend},
	{0xA9CF, 0xA9CF, WBP_ALetter},
	{0xA9D0, 0xA9D9, WBP_Numeric},
	{0xA9E5, 0xA9E5, WBP_Extend},
	{0xA9F0, 0xA9F9, WBP_Numeric},
	{0xAA00, 0xAA28, WBP_ALetter},
	{0xAA29, 0xAA2E, WBP_Extend},
	{0xAA2F, 0xAA30, WBP_Extend},
	{0xAA31, 0xAA32, WBP_Extend},
	{0xAA33, 0xAA34, WBP_Extend},
	{0xAA35, 0xAA36, WBP_Extend},
	{0xAA40, 0xAA42, WBP_ALetter},
	{0xAA43, 0xAA43, WBP_Extend},
	{0xAA44, 0xAA4B, WBP_ALetter},
	{0xAA4C, 0xAA4C, WBP_Extend},
	{0xAA4D, 0xAA4D, WBP_Extend},
	{0xAA50, 0xAA59, WBP_Numeric},
	{0xAA7B, 0xAA7B, WBP_Extend},
	{0xAA7C, 0xAA7C, WBP_Extend},
	{0xAA7D, 0xAA7D, WBP_Extend},
	{0xAAB0, 0xAAB0, WBP_Extend},
	{0xAAB2, 0xAAB4, WBP_Extend},
	{0xAAB7, 0xAAB8, WBP_Extend},
	{0xAABE, 0xAABF, WBP_Extend},
	{0xAAC1, 0xAAC1, WBP_Extend},
	{0xAAE0, 0xAAEA, WBP_ALetter},
	{0xAAEB, 0xAAEB, WBP_Extend},
	{0xAAEC, 0xAAED, WBP_Extend},
	{0xAAEE, 0xAAEF, WBP_Extend},
	{0xAAF2, 0xAAF2, WBP_ALetter},
	{0xAAF3, 0xAAF4, WBP_ALetter},
	{0xAAF5, 0xAAF5, WBP_Extend},
	{0xAAF6, 0xAAF6, WBP_Extend},
	{0xAB01, 0xAB06, WBP_ALetter},
	{0xAB09, 0xAB0E, WBP_ALetter},
	{0xAB11, 0xAB16, WBP_ALetter},
	{0xAB20, 0xAB26, WBP_ALetter},
	{0xAB28, 0xAB2E, WBP_ALetter},
	{0xAB30, 0xAB5A, WBP_ALetter},
	{0xAB5C, 0xAB5F, WBP_ALetter},
	{0xAB64, 0xAB65, WBP_ALetter},
	{0xABC0, 0xABE2, WBP_ALetter},
	{0xABE3, 0xABE4, WBP_Extend},
	{0xABE5, 0xABE5, WBP_Extend},
	{0xABE6, 0xABE7, WBP_Extend},
	{0xABE8, 0xABE8, WBP_Extend},
	{0xABE9, 0xABEA, WBP_Extend},
	{0xABEC, 0xABEC, WBP_Extend},
	{0xABED, 0xABED, WBP_Extend},
	{0xABF0, 0xABF9, WBP_Numeric},
	{0xAC00, 0xD7A3, WBP_ALetter},
	{0xD7B0, 0xD7C6, WBP_ALetter},
	{0xD7CB, 0xD7FB, WBP_ALetter},
	{0xFB00, 0xFB06, WBP_ALetter},
	{0xFB13, 0xFB17, WBP_ALetter},
	{0xFB1D, 0xFB1D, WBP_Hebrew_Letter},
	{0xFB1E, 0xFB1E, WBP_Extend},
	{0xFB1F, 0xFB28, WBP_Hebrew_Letter},
	{0xFB2A, 0xFB36, WBP_Hebrew_Letter},
	{0xFB38, 0xFB3C, WBP_Hebrew_Letter},
	{0xFB3E, 0xFB3E, WBP_Hebrew_Letter},
	{0xFB40, 0xFB41, WBP_Hebrew_Letter},
	{0xFB43, 0xFB44, WBP_Hebrew_Letter},
	{0xFB46, 0xFB4F, WBP_Hebrew_Letter},
	{0xFB50, 0xFBB1, WBP_ALetter},
	{0xFBD3, 0xFD3D, WBP_ALetter},
	{0xFD50, 0xFD8F, WBP_ALetter},
	{0xFD92, 0xFDC7, WBP_ALetter},
	{0xFDF0, 0xFDFB, WBP_ALetter},
	{0xFE00, 0xFE0F, WBP_Extend},
	{0xFE10, 0xFE10, WBP_MidNum},
	{0xFE13, 0xFE13, WBP_MidLetter},
	{0xFE14, 0xFE14, WBP_MidNum},
	{0xFE20, 0xFE2D, WBP_Extend},
	{0xFE33, 0xFE34, WBP_ExtendNumLet},
	{0xFE4D, 0xFE4F, WBP_ExtendNumLet},
	{0xFE50, 0xFE50, WBP_MidNum},
	{0xFE52, 0xFE52, WBP_MidNumLet},
	{0xFE54, 0xFE54, WBP_MidNum},
	{0xFE55, 0xFE55, WBP_MidLetter},
	{0xFE70, 0xFE74, WBP_ALetter},
	{0xFE76, 0xFEFC, WBP_ALetter},
	{0xFEFF, 0xFEFF, WBP_Format},
	{0xFF07, 0xFF07, WBP_MidNumLet},
	{0xFF0C, 0xFF0C, WBP_MidNum},
	{0xFF0E, 0xFF0E, WBP_MidNumLet},
	{0xFF1A, 0xFF1A, WBP_MidLetter},
	{0xFF1B, 0xFF1B, WBP_MidNum},
	{0xFF21, 0xFF3A, WBP_ALetter},
	{0xFF3F, 0xFF3F, WBP_ExtendNumLet},
	{0xFF41, 0xFF5A, WBP_ALetter},
	{0xFF66, 0xFF6F, WBP_Katakana},
	{0xFF70, 0xFF70, WBP_Katakana},
	{0xFF71, 0xFF9D, WBP_Katakana},
	{0xFF9E, 0xFF9F, WBP_Extend},
	{0xFFA0, 0xFFBE, WBP_ALetter},
	{0xFFC2, 0xFFC7, WBP_ALetter},
	{0xFFCA, 0xFFCF, WBP_ALetter},
	{0xFFD2, 0xFFD7, WBP_ALetter},
	{0xFFDA, 0xFFDC, WBP_ALetter},
	{0xFFF9, 0xFFFB, WBP_Format},
	{0x10000, 0x1000B, WBP_ALetter},
	{0x1000D, 0x10026, WBP_ALetter},
	{0x10028, 0x1003A, WBP_ALetter},
	{0x1003C, 0x1003D, WBP_ALetter},
	{0x1003F, 0x1004D, WBP_ALetter},
	{0x10050, 0x1005D, WBP_ALetter},
	{0x10080, 0x100FA, WBP_ALetter},
	{0x10140, 0x10174, WBP_ALetter},
	{0x101FD, 0x101FD, WBP_Extend},
	{0x10280, 0x1029C, WBP_ALetter},
	{0x102A0, 0x102D0, WBP_ALetter},
	{0x102E0, 0x102E0, WBP_Extend},
	{0x10300, 0x1031F, WBP_ALetter},
	{0x10330, 0x10340, WBP_ALetter},
	{0x10341, 0x10341, WBP_ALetter},
	{0x10342, 0x10349, WBP_ALetter},
	{0x1034A, 0x1034A, WBP_ALetter},
	{0x10350, 0x10375, WBP_ALetter},
	{0x10376, 0x1037A, WBP_Extend},
	{0x10380, 0x1039D, WBP_ALetter},
	{0x103A0, 0x103C3, WBP_ALetter},
	{0x103C8, 0x103CF, WBP_ALetter},
	{0x103D1, 0x103D5, WBP_ALetter},
	{0x10400, 0x1044F, WBP_ALetter},
	{0x10450, 0x1049D, WBP_ALetter},
	{0x104A0, 0x104A9, WBP_Numeric},
	{0x10500, 0x10527, WBP_ALetter},
	{0x10530, 0x10563, WBP_ALetter},
	{0x10600, 0x10736, WBP_ALetter},
	{0x10740, 0x10755, WBP_ALetter},
	{0x10760, 0x10767, WBP_ALetter},
	{0x10800, 0x10805, WBP_ALetter},
	{0x10808, 0x10808, WBP_ALetter},
	{0x1080A, 0x10835, WBP_ALetter},
	{0x10837, 0x10838, WBP_ALetter},
	{0x1083C, 0x1083C, WBP_ALetter},
	{0x1083F, 0x10855, WBP_ALetter},
	{0x10860, 0x10876, WBP_ALetter},
	{0x10880, 0x1089E, WBP_ALetter},
	{0x10900, 0x10915, WBP_ALetter},
	{0x10920, 0x10939, WBP_ALetter},
	{0x10980, 0x109B7, WBP_ALetter},
	{0x109BE, 0x109BF, WBP_ALetter},
	{0x10A00, 0x10A00, WBP_ALetter},
	{0x10A01, 0x10A03, WBP_Extend},
	{0x10A05, 0x10A06, WBP_Extend},
	{0x10A0C, 0x10A0F, WBP_Extend},
	{0x10A10, 0x10A13, WBP_ALetter},
	{0x10A15, 0x10A17, WBP_ALetter},
	{0x10A19, 0x10A33, WBP_ALetter},
	{0x10A38, 0x10A3A, WBP_Extend},
	{0x10A3F, 0x10A3F, WBP_Extend},
	{0x10A60, 0x10A7C, WBP_ALetter},
	{0x10A80, 0x10A9C, WBP_ALetter},
	{0x10AC0, 0x10AC7, WBP_ALetter},
	{0x10AC9, 0x10AE4, WBP_ALetter},
	{0x10AE5, 0x10AE6, WBP_Extend},
	{0x10B00, 0x10B35, WBP_ALetter},
	{0x10B40, 0x10B55, WBP_ALetter},
	{0x10B60, 0x10B72, WBP_ALetter},
	{0x10B80, 0x10B91, WBP_ALetter},
	{0x10C00, 0x10C48, WBP_ALetter},
	{0x11000, 0x11000, WBP_Extend},
	{0x11001, 0x11001, WBP_Extend},
	{0x11002, 0x11002, WBP_Extend},
	{0x11003, 0x11037, WBP_ALetter},
	{0x11038, 0x11046, WBP_Extend},
	{0x11066, 0x1106F, WBP_Numeric},
	{0x1107F, 0x11081, WBP_Extend},
	{0x11082, 0x11082, WBP_Extend},
	{0x11083, 0x110AF, WBP_ALetter},
	{0x110B0, 0x110B2, WBP_Extend},
	{0x110B3, 0x110B6, WBP_Extend},
	{0x110B7, 0x110B8, WBP_Extend},
	{0x110B9, 0x110BA, WBP_Extend},
	{0x110BD, 0x110BD, WBP_Format},
	{0x110D0, 0x110E8, WBP_ALetter},
	{0x110F0, 0x110F9, WBP_Numeric},
	{0x11100, 0x11102, WBP_Extend},
	{0x11103, 0x11126, WBP_ALetter},
	{0x11127, 0x1112B, WBP_Extend},
	{0x1112C, 0x1112C, WBP_Extend},
	{0x1112D, 0x11134, WBP_Extend},
	{0x11136, 0x1113F, WBP_Numeric},
	{0x11150, 0x11172, WBP_ALetter},
	{0x11173, 0x11173, WBP_Extend},
	{0x11176, 0x11176, WBP_ALetter},
	{0x11180, 0x11181, WBP_Extend},
	{0x11182, 0x11182, WBP_Extend},
	{0x11183, 0x111B2, WBP_ALetter},
	{0x111B3, 0x111B5, WBP_Extend},
	{0x111B6, 0x111BE, WBP_Extend},
	{0x111BF, 0x111C0, WBP_Extend},
	{0x111C1, 0x111C4, WBP_ALetter},
	{0x111D0, 0x111D9, WBP_Numeric},
	{0x111DA, 0x111DA, WBP_ALetter},
	{0x11200, 0x11211, WBP_ALetter},
	{0x11213, 0x1122B, WBP_ALetter},
	{0x1122C, 0x1122E, WBP_Extend},
	{0x1122F, 0x11231, WBP_Extend},
	{0x11232, 0x11233, WBP_Extend},
	{0x11234, 0x11234, WBP_Extend},
	{0x11235, 0x11235, WBP_Extend},
	{0x11236, 0x11237, WBP_Extend},
	{0x112B0, 0x112DE, WBP_ALetter},
	{0x112DF, 0x112DF, WBP_Extend},
	{0x112E0, 0x112E2, WBP_Extend},
	{0x112E3, 0x112EA, WBP_Extend},
	{0x112F0, 0x112F9, WBP_Numeric},
	{0x11301, 0x11301, WBP_Extend},
	{0x11302, 0x11303, WBP_Extend},
	{0x11305, 0x1130C, WBP_ALetter},
	{0x1130F, 0x11310, WBP_ALetter},
	{0x11313, 0x11328, WBP_ALetter},
	{0x1132A, 0x11330, WBP_ALetter},
	{0x11332, 0x11333, WBP_ALetter},
	{0x11335, 0x11339, WBP_ALetter},
	{0x1133C, 0x1133C, WBP_Extend},
	{0x1133D, 0x1133D, WBP_ALetter},
	{0x1133E, 0x1133F, WBP_Extend},
	{0x11340, 0x11340, WBP_Extend},
	{0x11341, 0x11344, WBP_Extend},
	{0x11347, 0x11348, WBP_Extend},
	{0x1134B, 0x1134D, WBP_Extend},
	{0x11357, 0x11357, WBP_Extend},
	{0x1135D, 0x11361, WBP_ALetter},
	{0x11362, 0x11363, WBP_Extend},
	{0x11366, 0x1136C, WBP_Extend},
	{0x11370, 0x11374, WBP_Extend},
	{0x11480, 0x114AF, WBP_ALetter},
	{0x114B0, 0x114B2, WBP_Extend},
	{0x114B3, 0x114B8, WBP_Extend},
	{0x114B9, 0x114B9, WBP_Extend},
	{0x114BA, 0x114BA, WBP_Extend},
	{0x114BB, 0x114BE, WBP_Extend},
	{0x114BF, 0x114C0, WBP_Extend},
	{0x114C1, 0x114C1, WBP_Extend},
	{0x114C2, 0x114C3, WBP_Extend},
	{0x114C4, 0x114C5, WBP_ALetter},
	{0x114C7, 0x114C7, WBP_ALetter},
	{0x114D0, 0x114D9, WBP_Numeric},
	{0x11580, 0x115AE, WBP_ALetter},
	{0x115AF, 0x115B1, WBP_Extend},
	{0x115B2, 0x115B5, WBP_Extend},
	{0x115B8, 0x115BB, WBP_Extend},
	{0x115BC, 0x115BD, WBP_Extend},
	{0x115BE, 0x115BE, WBP_Extend},
	{0x115BF, 0x115C0, WBP_Extend},
	{0x11600, 0x1162F, WBP_ALetter},
	{0x11630, 0x11632, WBP_Extend},
	{0x11633, 0x1163A, WBP_Extend},
	{0x1163B, 0x1163C, WBP_Extend},
	{0x1163D, 0x1163D, WBP_Extend},
	{0x1163E, 0x1163E, WBP_Extend},
	{0x1163F, 0x11640, WBP_Extend},
	{0x11644, 0x11644, WBP_ALetter},
	{0x11650, 0x11659, WBP_Numeric},
	{0x11680, 0x116AA, WBP_ALetter},
	{0x116AB, 0x116AB, WBP_Extend},
	{0x116AC, 0x116AC, WBP_Extend},
	{0x116AD, 0x116AD, WBP_Extend},
	{0x116AE, 0x116AF, WBP_Extend},
	{0x116B0, 0x116B5, WBP_Extend},
	{0x116B6, 0x116B6, WBP_Extend},
	{0x116B7, 0x116B7, WBP_Extend},
	{0x116C0, 0x116C9, WBP_Numeric},
	{0x118A0, 0x118DF, WBP_ALetter},
	{0x118E0, 0x118E9, WBP_Numeric},
	{0x118FF, 0x118FF, WBP_ALetter},
	{0x11AC0, 0x11AF8, WBP_ALetter},
	{0x12000, 0x12398, WBP_ALetter},
	{0x12400, 0x1246E, WBP_ALetter},
	{0x13000, 0x1342E, WBP_ALetter},
	{0x16800, 0x16A38, WBP_ALetter},
	{0x16A40, 0x16A5E, WBP_ALetter},
	{0x16A60, 0x16A69, WBP_Numeric},
	{0x16AD0, 0x16AED, WBP_ALetter},
	{0x16AF0, 0x16AF4, WBP_Extend},
	{0x16B00, 0x16B2F, WBP_ALetter},
	{0x16B30, 0x16B36, WBP_Extend},
	{0x16B40, 0x16B43, WBP_ALetter},
	{0x16B50, 0x16B59, WBP_Numeric},
	{0x16B63, 0x16B77, WBP_ALetter},
	{0x16B7D, 0x16B8F, WBP_ALetter},
	{0x16F00, 0x16F44, WBP_ALetter},
	{0x16F50, 0x16F50, WBP_ALetter},
	{0x16F51, 0x16F7E, WBP_Extend},
	{0x16F8F, 0x16F92, WBP_Extend},
	{0x16F93, 0x16F9F, WBP_ALetter},
	{0x1B000, 0x1B000, WBP_Katakana},
	{0x1BC00, 0x1BC6A, WBP_ALetter},
	{0x1BC70, 0x1BC7C, WBP_ALetter},
	{0x1BC80, 0x1BC88, WBP_ALetter},
	{0x1BC90, 0x1BC99, WBP_ALetter},
	{0x1BC9D, 0x1BC9E, WBP_Extend},
	{0x1BCA0, 0x1BCA3, WBP_Format},
	{0x1D165, 0x1D166, WBP_Extend},
	{0x1D167, 0x1D169, WBP_Extend},
	{0x1D16D, 0x1D172, WBP_Extend},
	{0x1D173, 0x1D17A, WBP_Format},
	{0x1D17B, 0x1D182, WBP_Extend},
	{0x1D185, 0x1D18B, WBP_Extend},
	{0x1D1AA, 0x1D1AD, WBP_Extend},
	{0x1D242, 0x1D244, WBP_Extend},
	{0x1D400, 0x1D454, WBP_ALetter},
	{0x1D456, 0x1D49C, WBP_ALetter},
	{0x1D49E, 0x1D49F, WBP_ALetter},
	{0x1D4A2, 0x1D4A2, WBP_ALetter},
	{0x1D4A5, 0x1D4A6, WBP_ALetter},
	{0x1D4A9, 0x1D4AC, WBP_ALetter},
	{0x1D4AE, 0x1D4B9, WBP_ALetter},
	{0x1D4BB, 0x1D4BB, WBP_ALetter},
	{0x1D4BD, 0x1D4C3, WBP_ALetter},
	{0x1D4C5, 0x1D505, WBP_ALetter},
	{0x1D507, 0x1D50A, WBP_ALetter},
	{0x1D50D, 0x1D514, WBP_ALetter},
	{0x1D516, 0x1D51C, WBP_ALetter},
	{0x1D51E, 0x1D539, WBP_ALetter},
	{0x1D53B, 0x1D53E, WBP_ALetter},
	{0x1D540, 0x1D544, WBP_ALetter},
	{0x1D546, 0x1D546, WBP_ALetter},
	{0x1D54A, 0x1D550, WBP_ALetter},
	{0x1D552, 0x1D6A5, WBP_ALetter},
	{0x1D6A8, 0x1D6C0, WBP_ALetter},
	{0x1D6C2, 0x1D6DA, WBP_ALetter},
	{0x1D6DC, 0x1D6FA, WBP_ALetter},
	{0x1D6FC, 0x1D714, WBP_ALetter},
	{0x1D716, 0x1D734, WBP_ALetter},
	{0x1D736, 0x1D74E, WBP_ALetter},
	{0x1D750, 0x1D76E, WBP_ALetter},
	{0x1D770, 0x1D788, WBP_ALetter},
	{0x1D78A, 0x1D7A8, WBP_ALetter},
	{0x1D7AA, 0x1D7C2, WBP_ALetter},
	{0x1D7C4, 0x1D7CB, WBP_ALetter},
	{0x1D7CE, 0x1D7FF, WBP_Numeric},
	{0x1E800, 0x1E8C4, WBP_ALetter},
	{0x1E8D0, 0x1E8D6, WBP_Extend},
	{0x1EE00, 0x1EE03, WBP_ALetter},
	{0x1EE05, 0x1EE1F, WBP_ALetter},
	{0x1EE21, 0x1EE22, WBP_ALetter},
	{0x1EE24, 0x1EE24, WBP_ALetter},
	{0x1EE27, 0x1EE27, WBP_ALetter},
	{0x1EE29, 0x1EE32, WBP_ALetter},
	{0x1EE34, 0x1EE37, WBP_ALetter},
	{0x1EE39, 0x1EE39, WBP_ALetter},
	{0x1EE3B, 0x1EE3B, WBP_ALetter},
	{0x1EE42, 0x1EE42, WBP_ALetter},
	{0x1EE47, 0x1EE47, WBP_ALetter},
	{0x1EE49, 0x1EE49, WBP_ALetter},
	{0x1EE4B, 0x1EE4B, WBP_ALetter},
	{0x1EE4D, 0x1EE4F, WBP_ALetter},
	{0x1EE51, 0x1EE52, WBP_ALetter},
	{0x1EE54, 0x1EE54, WBP_ALetter},
	{0x1EE57, 0x1EE57, WBP_ALetter},
	{0x1EE59, 0x1EE59, WBP_ALetter},
	{0x1EE5B, 0x1EE5B, WBP_ALetter},
	{0x1EE5D, 0x1EE5D, WBP_ALetter},
	{0x1EE5F, 0x1EE5F, WBP_ALetter},
	{0x1EE61, 0x1EE62, WBP_ALetter},
	{0x1EE64, 0x1EE64, WBP_ALetter},
	{0x1EE67, 0x1EE6A, WBP_ALetter},
	{0x1EE6C, 0x1EE72, WBP_ALetter},
	{0x1EE74, 0x1EE77, WBP_ALetter},
	{0x1EE79, 0x1EE7C, WBP_ALetter},
	{0x1EE7E, 0x1EE7E, WBP_ALetter},
	{0x1EE80, 0x1EE89, WBP_ALetter},
	{0x1EE8B, 0x1EE9B, WBP_ALetter},
	{0x1EEA1, 0x1EEA3, WBP_ALetter},
	{0x1EEA5, 0x1EEA9, WBP_ALetter},
	{0x1EEAB, 0x1EEBB, WBP_ALetter},
	{0x1F130, 0x1F149, WBP_ALetter},
	{0x1F150, 0x1F169, WBP_ALetter},
	{0x1F170, 0x1F189, WBP_ALetter},
	{0x1F1E6, 0x1F1FF, WBP_Regional_Indicator},
	{0xE0001, 0xE0001, WBP_Format},
	{0xE0020, 0xE007F, WBP_Format},
	{0xE0100, 0xE01EF, WBP_Extend},
	{0xFFFFFFFF, 0xFFFFFFFF, WBP_Undefined}
};