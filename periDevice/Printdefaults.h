/*
 * Printdefaults.h
 *
 *  Created on: 2012-8-6
 *      Author: yangyaoqing
 */

#ifndef PRINTDEFAULTS_H_
#define PRINTDEFAULTS_H_

#define PROGNAME "PRINTCONFIG"
#define ProgOpts "U:P:d:c:S:lDV#:p::bio:C::h:En:q:t:H::mh::sJ:T:rf:w::y:1:2:3:4:X"

/* Spacings and Sizes */
#define WAIT_WIN_SIZE 800
#define FRAME_SPACING_H 10
#define FRAME_SPACING_V 8
#define INFRAME_SPACING_H 10
#define INFRAME_SPACING_V 2
#define BUTTON_SPACING_H 10
#define BUTTON_SPACING_V 3
#define MESSAGE_SIZE_H 300
#define MESSAGE_SIZE_V 100
#define MESSAGE_SPACING_H 10
#define MESSAGE_SPACING_V 10
#define NUMCOPIES_FIELD_LENGTH 40
#define MEDIA_FIELDLENGTH 60+60
#define RANGE_FIELDLENGTH 100
#define TEXTSIZE_FIELDLENGTH 130+10
#define TEXTMARGIN_FIELDLENGTH 140
#define BANNERLABELFIELD_FIELDLENGTH 50
#define JOBNAME_FIELD_LENGTH 200
#define EXTRAOPT_FIELD_LENGTH 400
#define LOGINLABELFIELD_FIELDLENGTH 80
#define NUPCOMBOWIDTH 50
#define FRAME_BORDER 4
#define VBOX_BORDER 8
#define BUTTON_PAD 16
#define DIALOG_PAD 30
#define WINDOWINSCREENBORDER 50

/* PATHS */
#define DEF_GTKLPRC "/mnt/harddisk/emp/printer"//"/etc/printer"

#define GTKLPRC_USER "mnt/harddisk/emp/.printer"
//#define GTKLPRC_USER "home/yang/.printer"//test
#define GTKLPRC_GLOBAL "printerrc"

/* Constants */
#define DEF_PRN_LEN 50
#define MAX_BANNER 20
#define MAXPATH 256
#define MAXLINE 256
#define MAXPRINTFILES 100
#define MAXCMD 65536
#define MAXNUMCOPYDIGIT 3
#define MAXMEDIA 70
#define MEDIALNG 100
#define MAXRANGEENTRY 20
#define WAITFORSTDIN 1000
#define SLEEPBEFORE 1
#define BRIGHT_MIN 0
#define BRIGHT_MAX 200
#define BRIGHT_STEP 1
#define BRIGHT_PAGE 10
#define BRIGHT_DIGIT 0
#define GAMMA_MIN 0
#define GAMMA_MAX 2000
#define GAMMA_STEP 5
#define GAMMA_PAGE 100
#define GAMMA_DIGIT 0
#define IMAGE_SCALE_STEP 20
#define IMAGE_SCALE_PAGE 1
#define IMAGE_SCALE_DIGIT 0
#define IMAGE_PPI_STEP 20
#define IMAGE_PPI_PAGE 1
#define IMAGE_PPI_DIGIT 0
#define IMAGE_SCALE_NATURAL_STEP 20
#define IMAGE_SCALE_NATURAL_PAGE 1
#define IMAGE_SCALE_NATURAL_DIGIT 0
#define HUE_STEP 5
#define HUE_PAGE 1
#define HUE_DIGIT 0
#define SAT_STEP 10
#define SAT_PAGE 1
#define SAT_DIGIT 0
#define MAXTEXTPERFIELDDIGITS 30
#define MAX_CPI_DIGITS 2
#define MAX_LPI_DIGITS 2
#define MAX_CPP_DIGITS 2
#define MAX_MARGIN_DIGITS 3
#define MARGINS_POINTS "points = "
#define MARGINS_INCH " inch = "
#define MARGINS_MM " mm"
#define MAXMARGIN_ENTRY_LENGTH 30
#define MAX_IMAGE_POS_LENGTH 15
#define MAX_HPGL_PEN_DIGIT 6
#define MAX_HPGL_PEN_FIELD_LENGTH 45
#define MAX_JOB_NAME_LENGTH 20
#define MAX_EXTRAOPT 256
#define FILE_DIALOG_HEIGHT 150
#define MAX_SERVER_NAME 1024
#define MAX_PORT 6
#define MAX_URI 1024
#define PRINTER_INFO_FIELD_LENGTH 160
#define MAXOPTLEN 128
#define COMBO_MIN_SPACE 100
#define COMBO_EXTRA_SPACE 10

#endif /* PRINTDEFAULTS_H_ */