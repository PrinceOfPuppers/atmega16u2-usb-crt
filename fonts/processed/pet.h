#define CHAR_HEIGHT 9
#define MAX_CHAR_WIDTH 24
#define MAX_SEGMENTS 3

typedef struct CharacterData{
    uint8_t first_x;                  // first x value in offset list (allows for less beam oversaturation on prev char)
    uint8_t first_y;                  // first y ''
    uint8_t width;                  // full width of the character
    uint8_t length;                 // number of bytes for full char
    uint8_t segments;               // number of segments
    uint16_t offsets[MAX_SEGMENTS]; // offsets into characterArray for the start of each segment
    uint16_t lengths[MAX_SEGMENTS]; // number of bytes for segment
} CharacterData;

const CharacterData characterDataArray[] PROGMEM = {
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {0, 0, 0}, {0, 0, 0} },
    { 0, 0, 8, 0, 0, {0, 0, 0}, {0, 0, 0} }, //  
    { 12, 18, 8, 10, 2, {0, 2, 10}, {2, 8, 0} }, // !
    { 6, 0, 8, 12, 2, {10, 16, 22}, {6, 6, 0} }, // "
    { 3, 6, 8, 74, 1, {22, 96, 96}, {74, 0, 0} }, // #
    { 6, 15, 8, 62, 1, {96, 158, 158}, {62, 0, 0} }, // $
    { 3, 18, 8, 32, 3, {158, 170, 180}, {12, 10, 10} }, // %
    { 18, 12, 8, 52, 1, {190, 242, 242}, {52, 0, 0} }, // &
    { 9, 6, 8, 6, 1, {242, 248, 248}, {6, 0, 0} }, // '
    { 15, 0, 8, 14, 1, {248, 262, 262}, {14, 0, 0} }, // (
    { 6, 0, 8, 14, 1, {262, 276, 276}, {14, 0, 0} }, // )
    { 6, 3, 8, 82, 1, {276, 358, 358}, {82, 0, 0} }, // *
    { 6, 9, 8, 26, 1, {358, 384, 384}, {26, 0, 0} }, // +
    { 9, 21, 8, 6, 1, {384, 390, 390}, {6, 0, 0} }, // ,
    { 3, 9, 8, 12, 1, {390, 402, 402}, {12, 0, 0} }, // -
    { 9, 15, 8, 10, 1, {402, 412, 412}, {10, 0, 0} }, // .
    { 3, 18, 8, 12, 1, {412, 424, 424}, {12, 0, 0} }, // /
    { 3, 3, 8, 78, 1, {424, 502, 502}, {78, 0, 0} }, // 0
    { 6, 6, 8, 46, 1, {502, 548, 548}, {46, 0, 0} }, // 1
    { 3, 3, 8, 36, 1, {548, 584, 584}, {36, 0, 0} }, // 2
    { 3, 3, 8, 38, 1, {584, 622, 622}, {38, 0, 0} }, // 3
    { 3, 12, 8, 52, 1, {622, 674, 674}, {52, 0, 0} }, // 4
    { 3, 15, 8, 36, 1, {674, 710, 710}, {36, 0, 0} }, // 5
    { 15, 0, 8, 38, 1, {710, 748, 748}, {38, 0, 0} }, // 6
    { 3, 3, 8, 26, 1, {748, 774, 774}, {26, 0, 0} }, // 7
    { 3, 3, 8, 58, 1, {774, 832, 832}, {58, 0, 0} }, // 8
    { 6, 18, 8, 38, 1, {832, 870, 870}, {38, 0, 0} }, // 9
    { 12, 6, 8, 4, 2, {870, 872, 874}, {2, 2, 0} }, // :
    { 12, 6, 8, 8, 2, {874, 876, 882}, {2, 6, 0} }, // ;
    { 3, 9, 8, 46, 1, {882, 928, 928}, {46, 0, 0} }, // <
    { 3, 6, 8, 24, 2, {928, 940, 952}, {12, 12, 0} }, // =
    { 3, 0, 8, 34, 1, {952, 986, 986}, {34, 0, 0} }, // >
    { 9, 18, 8, 22, 2, {986, 988, 1008}, {2, 20, 0} }, // ?
    { 18, 18, 8, 42, 1, {1008, 1050, 1050}, {42, 0, 0} }, // @
    { 3, 18, 8, 48, 1, {1050, 1098, 1098}, {48, 0, 0} }, // A
    { 3, 0, 8, 56, 1, {1098, 1154, 1154}, {56, 0, 0} }, // B
    { 18, 3, 8, 26, 1, {1154, 1180, 1180}, {26, 0, 0} }, // C
    { 3, 0, 8, 50, 1, {1180, 1230, 1230}, {50, 0, 0} }, // D
    { 12, 9, 8, 56, 1, {1230, 1286, 1286}, {56, 0, 0} }, // E
    { 3, 18, 8, 46, 1, {1286, 1332, 1332}, {46, 0, 0} }, // F
    { 12, 9, 8, 34, 1, {1332, 1366, 1366}, {34, 0, 0} }, // G
    { 3, 0, 8, 58, 1, {1366, 1424, 1424}, {58, 0, 0} }, // H
    { 9, 0, 8, 26, 1, {1424, 1450, 1450}, {26, 0, 0} }, // I
    { 3, 15, 8, 26, 1, {1450, 1476, 1476}, {26, 0, 0} }, // J
    { 3, 0, 8, 46, 1, {1476, 1522, 1522}, {46, 0, 0} }, // K
    { 3, 0, 8, 24, 1, {1522, 1546, 1546}, {24, 0, 0} }, // L
    { 3, 0, 8, 74, 1, {1546, 1620, 1620}, {74, 0, 0} }, // M
    { 3, 0, 8, 58, 1, {1620, 1678, 1678}, {58, 0, 0} }, // N
    { 3, 6, 8, 30, 1, {1678, 1708, 1708}, {30, 0, 0} }, // O
    { 3, 18, 8, 36, 1, {1708, 1744, 1744}, {36, 0, 0} }, // P
    { 12, 12, 8, 34, 1, {1744, 1778, 1778}, {34, 0, 0} }, // Q
    { 3, 18, 8, 48, 1, {1778, 1826, 1826}, {48, 0, 0} }, // R
    { 3, 15, 8, 36, 1, {1826, 1862, 1862}, {36, 0, 0} }, // S
    { 6, 0, 8, 26, 1, {1862, 1888, 1888}, {26, 0, 0} }, // T
    { 3, 0, 8, 32, 1, {1888, 1920, 1920}, {32, 0, 0} }, // U
    { 3, 0, 8, 36, 1, {1920, 1956, 1956}, {36, 0, 0} }, // V
    { 3, 0, 8, 78, 1, {1956, 2034, 2034}, {78, 0, 0} }, // W
    { 3, 0, 8, 42, 1, {2034, 2076, 2076}, {42, 0, 0} }, // X
    { 6, 0, 8, 32, 1, {2076, 2108, 2108}, {32, 0, 0} }, // Y
    { 3, 0, 8, 36, 1, {2108, 2144, 2144}, {36, 0, 0} }, // Z
    { 15, 0, 8, 26, 1, {2144, 2170, 2170}, {26, 0, 0} }, // [
    { 3, 3, 8, 12, 1, {2170, 2182, 2182}, {12, 0, 0} }, // backslash
    { 6, 0, 8, 26, 1, {2182, 2208, 2208}, {26, 0, 0} }, // ]
    { 0, 0, 0, 0, 0, {2208, 2208, 2208}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {2208, 2208, 2208}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {2208, 2208, 2208}, {0, 0, 0} },
    { 6, 6, 8, 32, 1, {2208, 2240, 2240}, {32, 0, 0} }, // a
    { 3, 0, 8, 42, 1, {2240, 2282, 2282}, {42, 0, 0} }, // b
    { 18, 9, 8, 26, 1, {2282, 2308, 2308}, {26, 0, 0} }, // c
    { 18, 0, 8, 44, 1, {2308, 2352, 2352}, {44, 0, 0} }, // d
    { 15, 18, 8, 36, 1, {2352, 2388, 2388}, {36, 0, 0} }, // e
    { 3, 9, 8, 40, 1, {2388, 2428, 2428}, {40, 0, 0} }, // f
    { 6, 21, 8, 46, 1, {2428, 2474, 2474}, {46, 0, 0} }, // g
    { 3, 0, 8, 46, 1, {2474, 2520, 2520}, {46, 0, 0} }, // h
    { 12, 0, 8, 20, 2, {2520, 2522, 2540}, {2, 18, 0} }, // i
    { 15, 0, 8, 22, 2, {2540, 2542, 2562}, {2, 20, 0} }, // j
    { 3, 0, 8, 38, 1, {2562, 2600, 2600}, {38, 0, 0} }, // k
    { 9, 0, 8, 22, 1, {2600, 2622, 2622}, {22, 0, 0} }, // l
    { 3, 18, 8, 40, 1, {2622, 2662, 2662}, {40, 0, 0} }, // m
    { 3, 6, 8, 42, 1, {2662, 2704, 2704}, {42, 0, 0} }, // n
    { 3, 9, 8, 30, 1, {2704, 2734, 2734}, {30, 0, 0} }, // o
    { 3, 6, 8, 46, 1, {2734, 2780, 2780}, {46, 0, 0} }, // p
    { 18, 6, 8, 46, 1, {2780, 2826, 2826}, {46, 0, 0} }, // q
    { 3, 6, 8, 30, 1, {2826, 2856, 2856}, {30, 0, 0} }, // r
    { 3, 18, 8, 32, 1, {2856, 2888, 2888}, {32, 0, 0} }, // s
    { 3, 6, 8, 34, 1, {2888, 2922, 2922}, {34, 0, 0} }, // t
    { 3, 6, 8, 34, 1, {2922, 2956, 2956}, {34, 0, 0} }, // u
    { 3, 6, 8, 20, 1, {2956, 2976, 2976}, {20, 0, 0} }, // v
    { 3, 6, 8, 34, 1, {2976, 3010, 3010}, {34, 0, 0} }, // w
    { 3, 6, 8, 30, 1, {3010, 3040, 3040}, {30, 0, 0} }, // x
    { 3, 6, 8, 48, 1, {3040, 3088, 3088}, {48, 0, 0} }, // y
    { 3, 6, 8, 36, 1, {3088, 3124, 3124}, {36, 0, 0} }, // z
    { 0, 0, 0, 0, 0, {3124, 3124, 3124}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {3124, 3124, 3124}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {3124, 3124, 3124}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {3124, 3124, 3124}, {0, 0, 0} },
    { 0, 0, 0, 0, 0, {3124, 3124, 3124}, {0, 0, 0} }
};

const uint8_t characterArray[] PROGMEM = {
    12, 18, 12, 0, 12, 3, 12, 6, 12, 9, // ! 
    6, 0, 6, 3, 6, 6, 15, 0, 15, 3, 15, 6, // " 
    3, 6, 6, 6, 6, 3, 6, 0, 6, 3, 6, 6, 9, 6, 12, 6, 15, 6, 15, 3, 15, 0, 15, 3, 15, 6, 18, 6, 15, 6, 15, 9, 15, 12, 12, 12, 9, 12, 6, 12, 6, 9, 6, 6, 6, 9, 6, 12, 3, 12, 6, 12, 6, 15, 6, 18, 6, 15, 6, 12, 9, 12, 12, 12, 15, 12, 18, 12, 15, 12, 15, 15, 15, 18, // # 
    6, 15, 9, 15, 12, 15, 12, 12, 12, 9, 12, 6, 12, 3, 12, 0, 12, 3, 9, 3, 6, 6, 9, 9, 12, 9, 15, 9, 18, 12, 15, 15, 12, 15, 12, 18, 12, 15, 15, 15, 18, 12, 15, 9, 12, 9, 9, 9, 6, 6, 9, 3, 12, 6, 9, 3, 12, 3, 15, 3, 18, 3, // $ 
    3, 18, 6, 15, 9, 12, 12, 9, 15, 6, 18, 3, 3, 3, 6, 3, 6, 6, 3, 6, 3, 3, 15, 15, 18, 15, 18, 18, 15, 18, 15, 15, // % 
    18, 12, 15, 15, 12, 12, 9, 9, 6, 9, 3, 6, 3, 3, 6, 0, 9, 0, 12, 3, 12, 6, 9, 9, 12, 6, 12, 3, 9, 0, 6, 0, 3, 3, 3, 6, 6, 9, 3, 12, 3, 15, 6, 18, 9, 18, 12, 18, 15, 15, 18, 18, // & 
    9, 6, 12, 3, 15, 0, // ' 
    15, 0, 12, 3, 9, 6, 9, 9, 9, 12, 12, 15, 15, 18, // ( 
    6, 0, 9, 3, 12, 6, 12, 9, 12, 12, 9, 15, 6, 18, // ) 
    6, 3, 9, 6, 12, 6, 12, 3, 12, 0, 12, 3, 12, 6, 15, 6, 15, 9, 12, 9, 12, 6, 12, 9, 9, 9, 9, 6, 9, 9, 6, 9, 9, 9, 9, 12, 12, 12, 12, 9, 12, 12, 15, 12, 15, 9, 18, 9, 15, 9, 15, 12, 18, 15, 15, 12, 12, 12, 12, 15, 12, 18, 12, 15, 12, 12, 9, 12, 6, 15, 9, 12, 9, 9, 12, 9, 15, 9, 15, 6, 18, 3, // * 
    6, 9, 9, 9, 12, 9, 12, 6, 12, 3, 12, 6, 12, 9, 15, 9, 18, 9, 15, 9, 12, 9, 12, 12, 12, 15, // + 
    9, 21, 12, 18, 12, 15, // , 
    3, 9, 6, 9, 9, 9, 12, 9, 15, 9, 18, 9, // - 
    9, 15, 12, 15, 12, 18, 9, 18, 9, 15, // . 
    3, 18, 6, 15, 9, 12, 12, 9, 15, 6, 18, 3, // / 
    3, 3, 3, 6, 3, 9, 3, 12, 6, 12, 9, 9, 12, 9, 15, 6, 18, 6, 18, 3, 15, 0, 12, 0, 9, 0, 6, 0, 3, 3, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 18, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, 18, 3, 15, 3, 12, 3, 15, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, 18, 12, 18, 9, 15, 6, // 0 
    6, 6, 9, 3, 12, 3, 12, 0, 12, 3, 12, 6, 12, 9, 12, 12, 12, 15, 12, 18, 9, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, 15, 18, 12, 18, 12, 15, 12, 12, 12, 9, 12, 6, 9, 3, // 1 
    3, 3, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 15, 9, 12, 9, 9, 12, 6, 12, 3, 15, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, // 2 
    3, 3, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 15, 9, 12, 9, 9, 9, 12, 9, 15, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, 18, 3, 15, // 3 
    3, 12, 6, 12, 6, 9, 9, 6, 12, 3, 15, 3, 15, 0, 15, 3, 15, 6, 15, 9, 15, 12, 12, 12, 9, 12, 6, 12, 9, 12, 12, 12, 15, 12, 18, 12, 15, 12, 15, 15, 15, 18, 15, 15, 15, 12, 15, 9, 15, 6, 12, 3, // 4 
    3, 15, 6, 18, 9, 18, 12, 18, 15, 15, 18, 12, 15, 9, 12, 6, 9, 6, 6, 6, 3, 6, 3, 3, 3, 0, 6, 0, 9, 0, 12, 0, 15, 0, 18, 0, // 5 
    15, 0, 12, 0, 9, 0, 6, 3, 3, 6, 3, 9, 6, 9, 9, 9, 12, 9, 15, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, 18, 3, 15, 3, 12, 3, 9, // 6 
    3, 3, 3, 0, 6, 0, 9, 0, 12, 0, 15, 0, 18, 0, 18, 3, 15, 6, 12, 9, 9, 12, 9, 15, 9, 18, // 7 
    3, 3, 3, 6, 6, 9, 9, 9, 12, 9, 15, 9, 18, 6, 18, 3, 15, 0, 12, 0, 9, 0, 6, 0, 3, 3, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 15, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, 18, 3, 15, 3, 12, 6, 9, // 8 
    6, 18, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, 18, 3, 15, 0, 12, 0, 9, 0, 6, 0, 3, 3, 3, 6, 6, 9, 9, 9, 12, 9, 15, 9, 18, 9, // 9 
    12, 6, 12, 15, // : 
    12, 6, 9, 21, 12, 18, 12, 15, // ; 
    3, 9, 6, 9, 6, 6, 9, 6, 9, 3, 12, 3, 12, 0, 15, 0, 18, 0, 15, 0, 12, 0, 12, 3, 9, 3, 9, 6, 6, 6, 6, 9, 6, 12, 9, 12, 9, 15, 12, 15, 12, 18, 15, 18, 18, 18, // < 
    3, 6, 6, 6, 9, 6, 12, 6, 15, 6, 18, 6, 3, 12, 6, 12, 9, 12, 12, 12, 15, 12, 18, 12, // = 
    3, 0, 6, 0, 9, 0, 9, 3, 12, 3, 12, 6, 15, 6, 15, 9, 18, 9, 15, 9, 15, 12, 12, 12, 12, 15, 9, 15, 9, 18, 6, 18, 3, 18, // > 
    9, 18, 3, 3, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 15, 9, 12, 9, 9, 12, // ? 
    18, 18, 15, 18, 12, 18, 9, 18, 6, 15, 3, 12, 3, 9, 3, 6, 6, 3, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 18, 9, 15, 9, 15, 12, 12, 12, 9, 9, 12, 6, 15, 9, // @ 
    3, 18, 3, 15, 3, 12, 3, 9, 3, 6, 6, 3, 9, 0, 12, 0, 15, 3, 18, 6, 18, 9, 15, 9, 12, 9, 9, 9, 6, 9, 3, 9, 6, 9, 9, 9, 12, 9, 15, 9, 18, 9, 18, 12, 18, 15, 18, 18, // A 
    3, 0, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 15, 9, 12, 9, 9, 9, 6, 9, 6, 6, 6, 3, 6, 0, 6, 3, 6, 6, 6, 9, 6, 12, 6, 15, 6, 18, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, 18, 12, 15, 9, // B 
    18, 3, 15, 0, 12, 0, 9, 0, 6, 3, 3, 6, 3, 9, 3, 12, 6, 15, 9, 18, 12, 18, 15, 18, 18, 15, // C 
    3, 0, 6, 0, 9, 0, 12, 0, 15, 3, 18, 6, 18, 9, 18, 12, 15, 15, 12, 18, 9, 18, 6, 18, 6, 15, 6, 12, 6, 9, 6, 6, 6, 3, 6, 0, 6, 3, 6, 6, 6, 9, 6, 12, 6, 15, 6, 18, 3, 18, // D 
    12, 9, 9, 9, 6, 9, 3, 9, 3, 6, 3, 3, 3, 0, 6, 0, 9, 0, 12, 0, 15, 0, 18, 0, 15, 0, 12, 0, 9, 0, 6, 0, 3, 0, 3, 3, 3, 6, 3, 9, 3, 12, 3, 15, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, // E 
    3, 18, 3, 15, 3, 12, 3, 9, 3, 6, 3, 3, 3, 0, 6, 0, 9, 0, 12, 0, 15, 0, 18, 0, 15, 0, 12, 0, 9, 0, 6, 0, 3, 0, 3, 3, 3, 6, 3, 9, 6, 9, 9, 9, 12, 9, // F 
    12, 9, 15, 9, 18, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, 15, 3, 12, 3, 9, 3, 6, 6, 3, 9, 0, 12, 0, 15, 0, 18, 3, // G 
    3, 0, 3, 3, 3, 6, 3, 9, 6, 9, 9, 9, 12, 9, 15, 9, 18, 9, 18, 6, 18, 3, 18, 0, 18, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, 15, 18, 12, 18, 9, 15, 9, 12, 9, 9, 9, 6, 9, 3, 9, 3, 12, 3, 15, 3, 18, // H 
    9, 0, 12, 0, 15, 0, 12, 0, 12, 3, 12, 6, 12, 9, 12, 12, 12, 15, 12, 18, 9, 18, 12, 18, 15, 18, // I 
    3, 15, 6, 18, 9, 18, 12, 18, 15, 15, 15, 12, 15, 9, 15, 6, 15, 3, 15, 0, 12, 0, 15, 0, 18, 0, // J 
    3, 0, 3, 3, 3, 6, 3, 9, 6, 9, 9, 9, 12, 6, 15, 3, 18, 0, 15, 3, 12, 6, 9, 9, 12, 12, 15, 15, 18, 18, 15, 15, 12, 12, 9, 9, 6, 9, 3, 9, 3, 12, 3, 15, 3, 18, // K 
    3, 0, 3, 3, 3, 6, 3, 9, 3, 12, 3, 15, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, // L 
    3, 0, 3, 3, 6, 3, 9, 6, 12, 6, 12, 9, 9, 9, 9, 6, 9, 9, 12, 9, 12, 6, 15, 3, 18, 3, 18, 0, 18, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, 15, 18, 12, 18, 9, 18, 6, 15, 3, 18, 6, 18, 3, 15, 3, 12, 6, 9, 6, 6, 3, 3, 3, 3, 6, 3, 9, 3, 12, 3, 15, 3, 18, // M 
    3, 0, 3, 3, 6, 3, 9, 6, 12, 9, 15, 12, 18, 12, 18, 9, 18, 6, 18, 3, 18, 0, 18, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, 15, 18, 12, 15, 12, 12, 9, 9, 6, 6, 3, 3, 3, 3, 6, 3, 9, 3, 12, 3, 15, 3, 18, // N 
    3, 6, 3, 9, 3, 12, 6, 15, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, 15, 3, 12, 0, 9, 0, 6, 3, 3, 6, // O 
    3, 18, 3, 15, 3, 12, 3, 9, 3, 6, 3, 3, 3, 0, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 15, 9, 12, 9, 9, 9, 6, 9, 3, 9, // P 
    12, 12, 15, 15, 18, 12, 18, 9, 18, 6, 15, 3, 12, 0, 9, 0, 6, 3, 3, 6, 3, 9, 3, 12, 6, 15, 9, 18, 12, 18, 15, 15, 18, 18, // Q 
    3, 18, 3, 15, 3, 12, 3, 9, 3, 6, 3, 3, 3, 0, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, 18, 6, 15, 9, 12, 9, 9, 9, 6, 9, 3, 9, 6, 9, 9, 9, 12, 9, 12, 12, 15, 15, 18, 18, // R 
    3, 15, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, 18, 12, 15, 9, 12, 9, 9, 9, 6, 9, 3, 6, 3, 3, 6, 0, 9, 0, 12, 0, 15, 0, 18, 3, // S 
    6, 0, 9, 0, 12, 0, 15, 0, 18, 0, 15, 0, 12, 0, 12, 3, 12, 6, 12, 9, 12, 12, 12, 15, 12, 18, // T 
    3, 0, 3, 3, 3, 6, 3, 9, 3, 12, 3, 15, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, 18, 12, 18, 9, 18, 6, 18, 3, 18, 0, // U 
    3, 0, 3, 3, 3, 6, 6, 9, 6, 12, 9, 15, 12, 15, 12, 18, 9, 18, 9, 15, 9, 18, 12, 18, 12, 15, 15, 12, 15, 9, 18, 6, 18, 3, 18, 0, // V 
    3, 0, 3, 3, 3, 6, 3, 9, 3, 12, 3, 15, 6, 15, 9, 12, 9, 9, 12, 9, 12, 12, 9, 12, 12, 12, 15, 15, 18, 15, 18, 12, 18, 9, 18, 6, 18, 3, 18, 0, 18, 3, 18, 6, 18, 9, 18, 12, 15, 15, 18, 18, 18, 15, 18, 18, 15, 15, 18, 12, 18, 15, 15, 15, 12, 12, 12, 9, 9, 9, 9, 12, 6, 15, 3, 18, 3, 15, // W 
    3, 0, 3, 3, 6, 6, 9, 9, 12, 9, 15, 6, 18, 3, 18, 0, 18, 3, 15, 6, 12, 9, 15, 12, 18, 15, 18, 18, 18, 15, 15, 12, 12, 9, 9, 9, 6, 12, 3, 15, 3, 18, // X 
    6, 0, 6, 3, 6, 6, 9, 9, 12, 9, 15, 9, 18, 6, 18, 3, 18, 0, 18, 3, 18, 6, 15, 9, 12, 9, 12, 12, 12, 15, 12, 18, // Y 
    3, 0, 6, 0, 9, 0, 12, 0, 15, 0, 18, 0, 18, 3, 15, 6, 12, 9, 9, 9, 6, 12, 3, 15, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, // Z 
    15, 0, 12, 0, 9, 0, 6, 0, 6, 3, 6, 6, 6, 9, 6, 12, 6, 15, 6, 18, 9, 18, 12, 18, 15, 18, // [ 
    3, 3, 6, 6, 9, 9, 12, 12, 15, 15, 18, 18, // backslash 
    6, 0, 9, 0, 12, 0, 15, 0, 15, 3, 15, 6, 15, 9, 15, 12, 15, 15, 15, 18, 12, 18, 9, 18, 6, 18, // ] 
    6, 6, 9, 6, 12, 6, 15, 9, 15, 12, 12, 12, 9, 12, 6, 12, 3, 15, 6, 18, 9, 18, 12, 18, 15, 15, 15, 12, 15, 15, 18, 18, // a 
    3, 0, 3, 3, 3, 6, 3, 9, 6, 9, 9, 6, 12, 6, 15, 6, 18, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, 15, 3, 15, 3, 12, 3, 9, 3, 12, 3, 15, 3, 18, // b 
    18, 9, 15, 6, 12, 6, 9, 6, 6, 6, 3, 9, 3, 12, 3, 15, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, // c 
    18, 0, 18, 3, 18, 6, 18, 9, 15, 9, 12, 6, 9, 6, 6, 6, 3, 9, 3, 12, 3, 15, 6, 18, 9, 18, 12, 18, 15, 15, 18, 15, 18, 12, 18, 9, 18, 12, 18, 15, 18, 18, 15, 15, // d 
    15, 18, 12, 18, 9, 18, 6, 18, 3, 15, 3, 12, 3, 9, 6, 6, 9, 6, 12, 6, 15, 6, 18, 9, 18, 12, 15, 12, 12, 12, 9, 12, 6, 12, 3, 12, // e 
    3, 9, 6, 9, 9, 9, 9, 6, 9, 3, 12, 0, 15, 0, 18, 3, 15, 0, 12, 0, 9, 3, 9, 6, 9, 9, 12, 9, 15, 9, 12, 9, 9, 9, 9, 12, 9, 15, 9, 18, // f 
    6, 21, 9, 21, 12, 21, 15, 21, 18, 18, 18, 15, 18, 12, 18, 9, 18, 6, 18, 9, 15, 9, 15, 12, 18, 12, 15, 12, 12, 15, 9, 15, 6, 15, 3, 12, 3, 9, 6, 6, 9, 6, 12, 6, 15, 9, // g 
    3, 0, 3, 3, 3, 6, 3, 9, 6, 9, 9, 6, 12, 6, 15, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, 15, 18, 12, 18, 9, 15, 6, 12, 6, 9, 6, 6, 9, 3, 9, 3, 12, 3, 15, 3, 18, // h 
    12, 0, 9, 6, 12, 6, 12, 9, 12, 12, 12, 15, 12, 18, 9, 18, 12, 18, 15, 18, // i 
    15, 0, 3, 18, 6, 21, 9, 21, 12, 21, 15, 18, 15, 15, 15, 12, 15, 9, 15, 6, 12, 6, // j 
    3, 0, 3, 3, 3, 6, 3, 9, 3, 12, 3, 15, 6, 15, 9, 12, 12, 9, 15, 6, 12, 9, 9, 12, 12, 15, 15, 18, 12, 15, 9, 12, 6, 15, 3, 15, 3, 18, // k 
    9, 0, 12, 0, 12, 3, 12, 6, 12, 9, 12, 12, 12, 15, 12, 18, 9, 18, 12, 18, 15, 18, // l 
    3, 18, 3, 15, 3, 12, 3, 9, 3, 6, 6, 6, 9, 6, 12, 9, 12, 12, 12, 15, 12, 18, 12, 15, 12, 12, 12, 9, 15, 6, 18, 6, 21, 9, 21, 12, 21, 15, 21, 18, // m 
    3, 6, 3, 9, 6, 9, 9, 6, 12, 6, 15, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, 15, 18, 12, 18, 9, 15, 6, 12, 6, 9, 6, 6, 9, 3, 9, 3, 12, 3, 15, 3, 18, // n 
    3, 9, 3, 12, 3, 15, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, 18, 12, 18, 9, 15, 6, 12, 6, 9, 6, 6, 6, 3, 9, // o 
    3, 6, 3, 9, 6, 9, 6, 12, 3, 12, 3, 9, 3, 12, 3, 15, 3, 18, 3, 21, 3, 18, 3, 15, 3, 12, 6, 12, 9, 15, 12, 15, 15, 15, 18, 12, 18, 9, 15, 6, 12, 6, 9, 6, 6, 9, // p 
    18, 6, 18, 9, 15, 9, 15, 12, 18, 12, 18, 9, 18, 12, 18, 15, 18, 18, 18, 21, 18, 18, 18, 15, 18, 12, 15, 12, 12, 15, 9, 15, 6, 15, 3, 12, 3, 9, 6, 6, 9, 6, 12, 6, 15, 9, // q 
    3, 6, 3, 9, 6, 9, 9, 6, 12, 6, 15, 6, 18, 9, 15, 6, 12, 6, 9, 6, 6, 9, 3, 9, 3, 12, 3, 15, 3, 18, // r 
    3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, 15, 12, 12, 12, 9, 12, 6, 12, 3, 9, 6, 6, 9, 6, 12, 6, 15, 6, 18, 6, // s 
    3, 6, 6, 6, 9, 6, 9, 3, 9, 0, 9, 3, 9, 6, 12, 6, 15, 6, 12, 6, 9, 6, 9, 9, 9, 12, 9, 15, 12, 18, 15, 18, 18, 15, // t 
    3, 6, 3, 9, 3, 12, 3, 15, 6, 18, 9, 18, 12, 18, 15, 15, 18, 15, 18, 12, 18, 9, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, 15, // u 
    3, 6, 3, 9, 3, 12, 6, 15, 9, 18, 12, 18, 15, 15, 18, 12, 18, 9, 18, 6, // v 
    3, 6, 3, 9, 3, 12, 3, 15, 6, 18, 9, 18, 12, 15, 12, 12, 12, 9, 12, 12, 12, 15, 15, 18, 18, 18, 21, 15, 21, 12, 21, 9, 21, 6, // w 
    3, 6, 6, 9, 9, 12, 12, 12, 15, 9, 18, 6, 15, 9, 12, 12, 15, 15, 18, 18, 15, 15, 12, 12, 9, 12, 6, 15, 3, 18, // x 
    3, 6, 3, 9, 3, 12, 6, 15, 9, 15, 12, 15, 15, 12, 18, 12, 18, 9, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 15, 21, 12, 21, 9, 21, 6, 21, 9, 21, 12, 21, 15, 21, 18, 18, 18, 15, 15, 12, // y 
    3, 6, 6, 6, 9, 6, 12, 6, 15, 6, 18, 6, 15, 6, 15, 9, 12, 12, 9, 12, 6, 15, 6, 18, 3, 18, 6, 18, 9, 18, 12, 18, 15, 18, 18, 18, // z 
};
