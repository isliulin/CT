#ifndef PROBE_LIST_430_H__
#define PROBE_LIST_430_H__

///> probe list A60
#define PROBE_INFO_SIZE  128
#ifdef CT_430
enum EProbeList430 {P35C60E, P65L40E, P65C10E, PT65C15D, P35D50D}; // P35C20H, P28P16, P90L25K, P10L25J, P35D50D}; //80 阵元

unsigned char Probe35C60E[PROBE_INFO_SIZE] = //35C60E convex
{
    // black-white
    '3',    '5',    'C',    '6',    '0',    'J',    '0',    '0',    '0',    '0',
    'C',    0,      80,     1,      60,     60,     0,      60,     0,      0,
    0,      40,     2,      50,     0,      70,     2,      20,     0,      80,
    2,      10,     1,      0,      1,      80,     1,      20,     1,      50,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0x5a,

    //color
    '3',    '5',    'C',    '6',    '0',    'E',    0,      0,      0,      0,
    'C',    0,      80,     1,      60,     60,     0,      60,     0,      0,      0,
    0,      40,     1,      20,     3,      20,     0,      54,     0,      66,
    0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      'F',
    0,      0,      0,      0x5a,
};

//A60自制65C10E探头半径是11.6，此时写成了12。其他机型腔体探头的半径是10
//A60自制角度是120，外购的150
unsigned char Probe65C10E[PROBE_INFO_SIZE] = //65C10E //TV
{
    // black-white
    '6',   '5',    'C',    '1',    '0',    'J',    '0', '0',    '0',    '0',
    'C',    0,     80,      1,      60,     126,    0,   11,        0,      0,
    1,      0,      1,      20,     1,      20,     1,      0,      1,     50,
    0,      90,    1,     80,       0,      70,     0,     0,       0,      0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0x5a,

    //color
    '6',    '5',    'C',    '1',    '0',    'E',    0,      0,      0,      0,
    't',    0,      80,     1,      60,     126,    0,      11,     0,      0,      0,
    1,      0,      1,      80,     1,      20,     0,      98,     1,      16,
    0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      'F',
    0,      0,      0,      0x5a,
};
unsigned char Probe65L40E[PROBE_INFO_SIZE] = //75L40K 之前探头是3840 现在改成4100
{
    // black-white
    '6',   '5',    'L',    '4',    '0',    'J',     '0',    '0',    '0',    '0',
    'L',    0,      80,     1,      60,     41,     0,      0,      0,      0,
    1,      0,      1,      20,     1,      30,     1,      0,      1,      50,
    0,      90,     1,      70,     0,      80,     2,      0,      0,      80,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0x5a,

    //color
    '6',    '5',    'L',    '4',    '0',    'E',    0,      0,      0,      0,
    'l',    0,      80,     1,      60,     41,     0,      0,      0,       0,    0,
    1,      0,      2,      40,     1,      20,     1,      0,      1,      30,
    0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      'F',
    0,      0,      0,      0x5a,
};

unsigned char ProbeT65C15D[PROBE_INFO_SIZE] = //65C15D  //高频微凸
{
    // black-white
    '6',    '5',    'C',    '1',    '5',    'G',    '0',    '0',    '0',    '0',
    'C',    0,      80,     1,      60,     98,     0,      15,     0,      0,
    1,      20,     1,      0,
    1,      50,     0,      90,
    1,      80,     0,      70,
    0,      0,      0,      0,
    0,      0,      0,      0,
    0,      0,      0,      0,
    0,      0,      0,      0,
    0,      0,      0,      0,
    0,      0,      0,      0,
    0,      0,      0,      0,
    0,      0,      0,      0x5a,
    //color-65C15D
    '6',    '5',    'C',    '1',    '5',    'D',    0,      0,      0,      0,
    'n',    0,      80,     1,      60,     98,     0,      15,     0,       0,     0,
    1,      20,     1,      80,     1,      20,     0,      98,     1,      16,
    0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      'F',
    0,      0,      0,      0x5a,
};
#if 0
unsigned char Probe35C20H[PROBE_INFO_SIZE] = //35C20H //低频微凸
{
    // black-white
    '3',   '5',    'C',    '2',    '0',    'G',     '0',    '0',    '0',    '0',
    'C',    0,      96,     1,      92,     88,     0,      21,     0,      0,
    0,      50,     2,      50,     0,      70,     2,      20,     1,      0,
    1,      80,     0,      0,      0,      0,      0,      0,      0,      0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0x5a,

    //color
    '3',    '5',    'C',    '2',    '0',    'H',    0,      0,      0,      0,
    'N',    0,      96,     1,      92,     88,     0,      21,     0,       0,
    0,      50,     1,      20,     3,      0,      0,      54,     0,      66,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0x5a,
};
unsigned char Probe28P16[PROBE_INFO_SIZE] = //28P16
{
    // black-white
    '2',   '8',    'P',    '1',    '6',    '0',     '0',    '0',    '0',    '0',
    'P',    0,      64,     2,      56,     16,     0,      0,      0,      0,
    0,      40,     2,      50,     0,      50,     2,      50,     0,      56,
    2,      20,     0,      70,     2,      20,     0,      80,     2,      0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0x5a,

    //color
    '2',    '8',    'P',    '1',    '6',    0,      0,      0,      0,      0,
    'P',    0,      64,     2,      56,     90,     0,      0,      16,      0,
    0,      40,     0,      80,     2,      50,     0,      56,     0,      64,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0x5a,
};

unsigned char Probe10C60K[PROBE_INFO_SIZE] = //10C60K convex
{
    // black-white
    '1',        '0',    'C',    '6',    '0',    'J',    '0',    '0',    '0',    '0',
    'C',        1,              28,             2,              56,             24,             26,             60,             0,              0,
    1,          50,             0,              80,             2,              50,             0,              60,             0,              80,
    2,          10,             1,              0,              1,              80,             1,              20,             1,              50,
    0,          0,              0,              0,              0,              0,              0,              0,              0,              0,
    0,          0,              0,              0,              0,              0,              0,              0,              0,              0,
    0,          0,              0,              0x5a,

    //color
    '6',        '5',    'C',    '1',    '5',    'D',    0,              0,              0,              0,
    'c',        1,              28,             2,              56,             24,             26,             60,             0,              0,
    1,          50,             2,              50,             0,              80,             1,              60,             2,              0,
    0,          0,              0,              0,              0,              0,              0,              0,              0,              0,
    0,          0,              0,              0,              0,              0,              0,              0,              0,              0,
    0,          0,              0,              0,              0,              0,              0,              0,              0,              0,
    0,          0,              0,              0x5a,

};

unsigned char Probe90L25K[PROBE_INFO_SIZE] = //90L25K
{
    // black-white
    '9',   '0',    'L',    '2',    '5',    'K',     '0',    '0',    '0',    '0',
    'L',    1,      28,     2,      56,     25,     60,     0,      0,      0,
    1,      0,      1,      20,     1,      30,     1,      0,      1,      50,
    0,      90,     1,      70,     0,      80,     2,      0,      0,      80,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0x5a,

    //color
    '9',    '0',    'L',    '2',    '5',    'K',    0,      0,      0,      0,
    'l',    1,      28,     2,      56,     25,     60,     0,      0,       0,
    1,      50,     2,      40,     1,      0,      1,      50,     1,      80,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0x5a,
};

unsigned char Probe10L25K[PROBE_INFO_SIZE] = //10L25J
{
    // black-white
    '1',   '0',    'L',    '2',    '5',    'J',     '0',    '0',    '0',    '0',
    'L',    1,      28,     2,      56,     25,     60,     0,      0,      0,
    1,      60,     1,      20,     2,      0,      1,      0,      2,      40,
    0,      90,     0,      0,      0,      0,      0,      0,      0,      0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0,      0,      0,      0,      0,      0,     0,
    0,     0,       0,      0x5a,

    //color
    '1',    '0',    'L',    '2',    '5',    'J',    0,      0,      0,      0,
    'l',    1,      28,     2,      56,     25,     40,     0,      0,       0,  0,
    1,      60,     2,      40,     1,      20,     1,      50,     1,      80,
    0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0x5a,
};
#endif
unsigned char Probe35D50D[PROBE_INFO_SIZE] = //35D50D convex
{
    // black-white
    '3',    '5',    'D',    '5',    '0',    'D',    '0',    '0',    '0',    '0',
    'C',    0,      80,     1,      60,     75,     60,     40,     0,      0,
    0,      40,     2,      50,     0,      70,     2,      20,     0,      80,
    2,      10,     1,      0,      1,      80,     1,      20,     1,      50,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0x5a,

    //color
    '3',    '5',    'D',    '5',    '0',    'D',    0,      0,      0,      0,
    'V',    0,      80,     1,      60,     76,     60,     40,     0,      0,     0,
    0,      40,     1,      20,     3,      20,     0,      48,     0,      60,
    0,      0,      0,      0,      0,      0,      21,     40,     85,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,      0,      'F',
    0,      0,      0,      0x5a,
};
#endif
#endif