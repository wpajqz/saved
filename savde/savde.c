// savde.cpp: 定义应用程序的入口点。
//

#include "savde.h"

#include<libavformat/avformat.h>
#include<libavcodec/avcodec.h>
#include<libswresample/swresample.h>
#include<libswscale/swscale.h>
#include<libavutil/avutil.h>


typedef struct SAVDECodec {
    AVCodec *codec;
    AVCodecContext *avctx;
    AVFormatContext *pfmt;
}SAVDECodec;

void test(void)
{
    printf("hello\n");
}

SAVDEContext* savde_create_context() {
    SAVDEContext *ctx = (SAVDEContext*)malloc(sizeof(SAVDEContext));
    ctx->codec = NULL;
    return ctx;
}

int savde_init_open(SAVDEContext *ctx, const char *path, const char *options, int isencoder) {
    if (ctx == NULL && !isencoder)
    {

        return SAVDE_E_USE_NULL;
    }
}
