// saved.cpp: 定义应用程序的入口点。
//

#include "saved.h"

#include<libavformat/avformat.h>
#include<libavcodec/avcodec.h>
#include<libswresample/swresample.h>
#include<libswscale/swscale.h>
#include<libavutil/avutil.h>


typedef struct SAVEDCodec {
    AVCodec *codec;
    AVCodecContext *avctx;
    AVFormatContext *pfmt;
}SAVEDCodec;

void test(void)
{
    printf("hello\n");
}

SAVEDContext* saved_create_context() {
    SAVEDContext *ctx = (SAVEDContext*)malloc(sizeof(SAVEDContext));
    ctx->codec = NULL;
    return ctx;
}

int saved_init_open(SAVEDContext *ctx, const char *path, const char *options, int isencoder) {
    if (ctx == NULL && !isencoder)
    {

        return SAVED_E_USE_NULL;
    }
}
