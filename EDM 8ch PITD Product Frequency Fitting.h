/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2016. All Rights Reserved.          */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  AP                               1
#define  AP_filelist                      2       /* control type: string, callback function: (none) */
#define  AP_InputDir                      3       /* control type: textBox, callback function: Names */
#define  AP_OutputDirCum                  4       /* control type: textBox, callback function: Names */
#define  AP_InputName                     5       /* control type: textBox, callback function: Names */
#define  AP_SerStart                      6       /* control type: numeric, callback function: Names */
#define  AP_SerStop                       7       /* control type: numeric, callback function: Names */
#define  AP_Pickup                        8       /* control type: textButton, callback function: Pickup */
#define  AP_SerSuffix                     9       /* control type: textBox, callback function: Names */
#define  AP_CumName                       10      /* control type: textBox, callback function: Names */
#define  AP_SumName                       11      /* control type: textBox, callback function: Names */
#define  AP_w4_B                          12      /* control type: numeric, callback function: InitParam */
#define  AP_t4_B                          13      /* control type: numeric, callback function: InitParam */
#define  AP_w3_B                          14      /* control type: numeric, callback function: InitParam */
#define  AP_t3_B                          15      /* control type: numeric, callback function: InitParam */
#define  AP_a4_B                          16      /* control type: numeric, callback function: InitParam */
#define  AP_p4_B                          17      /* control type: numeric, callback function: InitParam */
#define  AP_w2_B                          18      /* control type: numeric, callback function: InitParam */
#define  AP_w4_e_B                        19      /* control type: numeric, callback function: (none) */
#define  AP_a4_e_B                        20      /* control type: numeric, callback function: (none) */
#define  AP_p4_e_B                        21      /* control type: numeric, callback function: (none) */
#define  AP_t4_e_B                        22      /* control type: numeric, callback function: (none) */
#define  AP_a3_B                          23      /* control type: numeric, callback function: InitParam */
#define  AP_t2_B                          24      /* control type: numeric, callback function: InitParam */
#define  AP_w4_A                          25      /* control type: numeric, callback function: InitParam */
#define  AP_t4_A                          26      /* control type: numeric, callback function: InitParam */
#define  AP_w1_B                          27      /* control type: numeric, callback function: InitParam */
#define  AP_t1_B                          28      /* control type: numeric, callback function: InitParam */
#define  AP_a2_B                          29      /* control type: numeric, callback function: InitParam */
#define  AP_p3_B                          30      /* control type: numeric, callback function: InitParam */
#define  AP_chi4_B                        31      /* control type: numeric, callback function: (none) */
#define  AP_chi3_B                        32      /* control type: numeric, callback function: (none) */
#define  AP_w3_e_B                        33      /* control type: numeric, callback function: (none) */
#define  AP_a3_e_B                        34      /* control type: numeric, callback function: (none) */
#define  AP_p3_e_B                        35      /* control type: numeric, callback function: (none) */
#define  AP_t3_e_B                        36      /* control type: numeric, callback function: (none) */
#define  AP_p2_B                          37      /* control type: numeric, callback function: InitParam */
#define  AP_w3_A                          38      /* control type: numeric, callback function: InitParam */
#define  AP_w2_e_B                        39      /* control type: numeric, callback function: (none) */
#define  AP_a2_e_B                        40      /* control type: numeric, callback function: (none) */
#define  AP_p2_e_B                        41      /* control type: numeric, callback function: (none) */
#define  AP_t2_e_B                        42      /* control type: numeric, callback function: (none) */
#define  AP_a1_B                          43      /* control type: numeric, callback function: InitParam */
#define  AP_t3_A                          44      /* control type: numeric, callback function: InitParam */
#define  AP_a4_A                          45      /* control type: numeric, callback function: InitParam */
#define  AP_p4_A                          46      /* control type: numeric, callback function: InitParam */
#define  AP_w2_A                          47      /* control type: numeric, callback function: InitParam */
#define  AP_w4_e_A                        48      /* control type: numeric, callback function: (none) */
#define  AP_a4_e_A                        49      /* control type: numeric, callback function: (none) */
#define  AP_p4_e_A                        50      /* control type: numeric, callback function: (none) */
#define  AP_t4_e_A                        51      /* control type: numeric, callback function: (none) */
#define  AP_p1_B                          52      /* control type: numeric, callback function: InitParam */
#define  AP_chi2_B                        53      /* control type: numeric, callback function: (none) */
#define  AP_chi1_B                        54      /* control type: numeric, callback function: (none) */
#define  AP_niter4_B                      55      /* control type: numeric, callback function: (none) */
#define  AP_niter3_B                      56      /* control type: numeric, callback function: (none) */
#define  AP_w1_e_B                        57      /* control type: numeric, callback function: (none) */
#define  AP_a1_e_B                        58      /* control type: numeric, callback function: (none) */
#define  AP_p1_e_B                        59      /* control type: numeric, callback function: (none) */
#define  AP_t1_e_B                        60      /* control type: numeric, callback function: (none) */
#define  AP_a3_A                          61      /* control type: numeric, callback function: InitParam */
#define  AP_t2_A                          62      /* control type: numeric, callback function: InitParam */
#define  AP_REFW                          63      /* control type: numeric, callback function: (none) */
#define  AP_w1_A                          64      /* control type: numeric, callback function: InitParam */
#define  AP_t1_A                          65      /* control type: numeric, callback function: InitParam */
#define  AP_a2_A                          66      /* control type: numeric, callback function: InitParam */
#define  AP_p3_A                          67      /* control type: numeric, callback function: InitParam */
#define  AP_chi4_A                        68      /* control type: numeric, callback function: (none) */
#define  AP_chi3_A                        69      /* control type: numeric, callback function: (none) */
#define  AP_w3_e_A                        70      /* control type: numeric, callback function: (none) */
#define  AP_a3_e_A                        71      /* control type: numeric, callback function: (none) */
#define  AP_p3_e_A                        72      /* control type: numeric, callback function: (none) */
#define  AP_t3_e_A                        73      /* control type: numeric, callback function: (none) */
#define  AP_p2_A                          74      /* control type: numeric, callback function: InitParam */
#define  AP_QUIT                          75      /* control type: command, callback function: Quit */
#define  AP_niter2_B                      76      /* control type: numeric, callback function: (none) */
#define  AP_niter1_B                      77      /* control type: numeric, callback function: (none) */
#define  AP_w2_e_A                        78      /* control type: numeric, callback function: (none) */
#define  AP_a2_e_A                        79      /* control type: numeric, callback function: (none) */
#define  AP_p2_e_A                        80      /* control type: numeric, callback function: (none) */
#define  AP_t2_e_A                        81      /* control type: numeric, callback function: (none) */
#define  AP_a1_A                          82      /* control type: numeric, callback function: InitParam */
#define  AP_Resid2                        83      /* control type: graph, callback function: (none) */
#define  AP_AmpDev2                       84      /* control type: graph, callback function: (none) */
#define  AP_Data2                         85      /* control type: graph, callback function: (none) */
#define  AP_Resid                         86      /* control type: graph, callback function: (none) */
#define  AP_AmpDev                        87      /* control type: graph, callback function: (none) */
#define  AP_Data                          88      /* control type: graph, callback function: (none) */
#define  AP_p1_A                          89      /* control type: numeric, callback function: InitParam */
#define  AP_chi2_A                        90      /* control type: numeric, callback function: (none) */
#define  AP_chi1_A                        91      /* control type: numeric, callback function: (none) */
#define  AP_niter4_A                      92      /* control type: numeric, callback function: (none) */
#define  AP_niter3_A                      93      /* control type: numeric, callback function: (none) */
#define  AP_w1_e_A                        94      /* control type: numeric, callback function: (none) */
#define  AP_a1_e_A                        95      /* control type: numeric, callback function: (none) */
#define  AP_p1_e_A                        96      /* control type: numeric, callback function: (none) */
#define  AP_t1_e_A                        97      /* control type: numeric, callback function: (none) */
#define  AP_DataStartB                    98      /* control type: numeric, callback function: DataRange */
#define  AP_DataStartA                    99      /* control type: numeric, callback function: DataRange */
#define  AP_DataStopB                     100     /* control type: numeric, callback function: DataRange */
#define  AP_DataStopA                     101     /* control type: numeric, callback function: DataRange */
#define  AP_FitStart                      102     /* control type: numeric, callback function: FitRange */
#define  AP_FitStop                       103     /* control type: numeric, callback function: FitRange */
#define  AP_niter2_A                      104     /* control type: numeric, callback function: (none) */
#define  AP_niter1_A                      105     /* control type: numeric, callback function: (none) */
#define  AP_Hist_Amp_B                    106     /* control type: graph, callback function: (none) */
#define  AP_TEXTMSG_36                    107     /* control type: textMsg, callback function: (none) */
#define  AP_Hist_Amp_A                    108     /* control type: graph, callback function: (none) */
#define  AP_Hist_Combo                    109     /* control type: graph, callback function: (none) */
#define  AP_Hist_TDark                    110     /* control type: graph, callback function: (none) */
#define  AP_Hist_wAvg_B                   111     /* control type: graph, callback function: (none) */
#define  AP_Hist_wAvg_A                   112     /* control type: graph, callback function: (none) */
#define  AP_Error                         113     /* control type: textBox, callback function: (none) */
#define  AP_ReadData                      114     /* control type: command, callback function: ReadData */
#define  AP_Single                        115     /* control type: command, callback function: SingleAnalyze */
#define  AP_Ind                           116     /* control type: slide, callback function: (none) */
#define  AP_Pause                         117     /* control type: toggle, callback function: Pause */
#define  AP_Series                        118     /* control type: command, callback function: SerAnalyze */
#define  AP_Pause_FNF                     119     /* control type: binary, callback function: Pause_FNF */
#define  AP_CurNum                        120     /* control type: numeric, callback function: (none) */
#define  AP_GraphSelect1                  121     /* control type: slide, callback function: Graph_Select */
#define  AP_GraphSelect2                  122     /* control type: slide, callback function: Graph_Select */
#define  AP_GraphSelect3                  123     /* control type: slide, callback function: Graph_Select */
#define  AP_GraphSelect4                  124     /* control type: slide, callback function: Graph_Select */
#define  AP_REFON                         125     /* control type: radioButton, callback function: RefFreqOn */
#define  AP_START                         126     /* control type: numeric, callback function: (none) */
#define  AP_SKIP                          127     /* control type: numeric, callback function: (none) */
#define  AP_FREQ                          128     /* control type: numeric, callback function: FREQCB */
#define  AP_DataSe                        129     /* control type: slide, callback function: DataSeCB */
#define  AP_TIMER                         130     /* control type: timer, callback function: TimerCallback */
#define  AP_TEXTMSG_15                    131     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_27                    132     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_16                    133     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_9                     134     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_37                    135     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_28                    136     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_29                    137     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_31                    138     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_2                     139     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_3                     140     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_13                    141     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_14                    142     /* control type: textMsg, callback function: (none) */
#define  AP_DECORATION_8                  143     /* control type: deco, callback function: (none) */
#define  AP_TEXTMSG_32                    144     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_33                    145     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_34                    146     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_35                    147     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_21                    148     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_22                    149     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_23                    150     /* control type: textMsg, callback function: (none) */
#define  AP_TEXTMSG_24                    151     /* control type: textMsg, callback function: (none) */
#define  AP_Cutoff                        152     /* control type: numeric, callback function: (none) */
#define  AP_TArrayAvgPts                  153     /* control type: numeric, callback function: (none) */
#define  AP_THRESHOLD                     154     /* control type: numeric, callback function: (none) */
#define  AP_PumpPoints                    155     /* control type: numeric, callback function: (none) */
#define  AP_Analyze                       156     /* control type: command, callback function: Analyze_Seq */

#define  FE                               2
#define  FE_OV                            2       /* control type: command, callback function: (none) */
#define  FE_NewName                       3       /* control type: textBox, callback function: (none) */
#define  FE_Cancel                        4       /* control type: command, callback function: (none) */
#define  FE_Error                         5       /* control type: textMsg, callback function: (none) */

#define  FNF                              3
#define  FNF_OK                           2       /* control type: command, callback function: (none) */
#define  FNF_TEXTMSG                      3       /* control type: textMsg, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK Analyze_Seq(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK DataRange(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK DataSeCB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK FitRange(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK FREQCB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Graph_Select(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK InitParam(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Names(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Pause(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Pause_FNF(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Pickup(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Quit(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ReadData(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK RefFreqOn(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SerAnalyze(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SingleAnalyze(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK TimerCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
