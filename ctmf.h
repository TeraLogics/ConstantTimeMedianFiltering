#ifndef CTMF_H
#define CTMF_H

#ifdef __cplusplus
extern "C" {
#endif

void ctmf(
        const unsigned char* src, unsigned char* dst,
        int width, int height,
        int src_step_row, int dst_step_row,
        int r, int channels, unsigned int memsize);

void ctmf_par(
        const unsigned char* const src, unsigned char* const dst,
        int width, int height,
        int src_step, int dst_step,
        int r, const int cn, unsigned int memsize,
        int padl, int padr);

#ifdef __cplusplus
}
#endif

#endif
