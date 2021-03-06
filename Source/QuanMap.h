
#ifndef QUANMAP_H_INCLUDED
#define QUANMAP_H_INCLUDED

#define QUAN_RES2           75
#define QUAN_RES3           50
#define QUAN_RES4           46
#define QUAN_RES5           75
#define QUAN_RES6           75
#define QUAN_RES7           19
#define QUAN_RES8           64

//  Major Scale
const uint8_t calibMap2[QUAN_RES2] = {
0, 2, 4, 5, 7,
9, 11, 12, 14, 16,
17, 19, 21, 23, 24,
26, 28, 29, 31, 33,
35, 36, 38, 40, 41,
43, 45, 47, 48, 50,
52, 53, 55, 57, 59,
60, 62, 64, 65, 67,
69, 71, 72, 74, 76,
77, 79, 81, 83, 84,
86, 88, 89, 91, 93,
95, 96, 98, 100, 101,
103, 105, 107, 108, 110,
112, 113, 115, 117, 119,
120, 122, 124, 125, 127
};

//  M7(9)
const uint8_t calibMap3[QUAN_RES3] = {
0,  4, 7, 11, 12, 
14, 16, 19, 23, 24,
26, 28, 31, 35, 36, 
38, 40, 43, 47, 48, 
50, 52, 55, 59, 60, 
62, 64, 67, 71, 72, 
76, 79, 83, 84, 86, 
88, 91, 95, 96, 100,
103, 107, 108, 110, 112, 
115, 119, 120, 124, 127
};

//  m7(9)
const uint8_t calibMap4[QUAN_RES4] = {
0, 3, 7, 10, 12, 
15, 19, 22, 26, 27, 
31, 34, 36, 38, 39, 
43, 46, 50, 53, 55, 
58, 60, 63, 67, 70, 
72, 74, 75, 79, 82, 
86, 89, 91, 94, 96, 
99, 103, 106, 110, 113,
115, 118, 120, 122, 123, 127
};

//  Dorian Scale
const uint8_t calibMap5[QUAN_RES5] = {
0, 2, 3, 5, 7,
9, 10, 12, 14, 15,
17, 19, 20, 21, 24,
26, 27, 29, 31, 33,
34, 36, 38, 39, 41,
43, 45, 46, 48, 50,
51, 53, 55, 57, 58,
60, 62, 63, 65, 67,
69, 70, 72, 74, 75,
77, 79, 81, 82, 84,
86, 87, 89, 91, 93,
94, 96, 98, 99, 101,
103, 105, 106, 108, 110,
111, 113, 115, 117, 118,
120, 122, 123, 125, 127
};

//  Minor Scale
const uint8_t calibMap6[QUAN_RES6] = {
0, 2, 3, 5, 7,
8, 10, 12, 14, 15,
17, 19, 20, 22, 24,
26, 27, 29, 31, 32,
34, 36, 38, 39, 41,
43, 44, 46, 48, 50,
51, 53, 55, 56, 58,
60, 62, 63, 65, 67,
68, 70, 72, 74, 75,
77, 79, 80, 82, 84,
86, 87, 89, 91, 92,
94, 96, 98, 99, 101,
103, 104, 106, 108, 110,
111, 113, 115, 116, 118,
120, 122, 123, 125, 127
};

//  5th
const uint8_t calibMap7[QUAN_RES7] = {
0, 7, 14, 21, 28,
35, 42, 49, 56, 63,
70, 77, 84, 91, 98,
105, 112, 119, 126
};

//  Whole tone
const uint8_t calibMap8[QUAN_RES8] = {
0, 1, 2, 6, 8,
10, 12, 14, 16, 18,
20, 22, 24, 26, 28,
30, 32, 34, 36, 38,
40, 42, 44, 46, 48,
50, 52, 54, 56, 58,
60, 62, 64, 66, 68,
70, 72, 74, 76, 78,
80, 82, 84, 86, 88,
90, 92, 94, 96, 98,
100, 102, 104, 106, 108,
110, 112, 114, 116, 118,
120, 122, 124, 126
};

inline int Map(int x, int in_min, int in_max, int out_min, int out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

#endif  // QUANMAP_H_INCLUDED
