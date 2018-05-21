// savde.h: 标准系统包含文件的包含文件，
// 或特定于项目的包含文件。

#pragma once

#include<stdio.h>

#define SAVDE_E_
#define SAVDE_E_USE_NULL -255;

typedef enum SAVDEMEDIA_TYPE {
    SAVDEPKT_TYPE_NONE,
    SAVDEPKT_TYPE_AUDIO,
    SAVDEPKT_TYPE_VIDEO,
}SAVDEMEDIA_TYPE;

typedef struct SAVDEContext {
    void *codec;
}SAVDEContext;

typedef struct SAVDEPkt {
    double duration;
    double pts;
    SAVDEMEDIA_TYPE type;
    unsigned char * data;
    int size;
    void *internalPkt;//ffmpeg avpacket
    int useinternal;//1 for use internaldata
}SAVDEPkt;

typedef struct SAVDEFrame {
    double duration;
    double pts;
    SAVDEMEDIA_TYPE type;
    unsigned char * data;//raw data
    int size;
    void *internalframe;//ffmpeg avframe
    int useinternal;// 1 for use internaldata
}SAVDEFrame;


void test(void);

SAVDEContext* savde_create_context();

int savde_del_context();

int savde_init_open(SAVDEContext *ctx, const char *path,const char *options, int isencoder );

int savde_create_pkt_context();

int savde_del_pkt_context();

int savde_get_pkt();

int savde_send_pkt();

int savde_get_frame();

int savde_send_frame();

int savde_get_frame_raw();

int savde_get_pkt_raw();


// TODO: 在此处引用程序需要的其他标头。
