#ifndef __ENCODER_H__
#define __ENCODER_H__


#include "codec.h"

SAVEDEncoderContext * saved_encoder_alloc();

int saved_encoder_open(SAVEDEncoderContext *ctx, const char *options);

int saved_encoder_open_with_par(SAVEDEncoderContext *ctx, int vw, int vh , int vbit_rate, int asample_rate, int ach, int abit_rate);


int saved_encoder_send_frame(SAVEDEncoderContext *ctx, SAVEDFrame *frame);

int saved_encoder_recive_pkt(SAVEDEncoderContext *ctx,SAVEDPkt *pkt);

void saved_encoder_close(SAVEDEncoderContext *ctx);

#endif // !__ENCODER_H__