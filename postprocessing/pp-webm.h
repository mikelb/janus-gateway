/*! \file    pp-webm.h
 * \author   Lorenzo Miniero <lorenzo@meetecho.com>
 * \copyright GNU General Public License v3
 * \brief    Post-processing to generate .webm files (headers)
 * \details  Implementation of the post-processing code (based on FFmpeg)
 * needed to generate .webm files out of VP8 RTP frames.
 * 
 * \ingroup postprocessing
 * \ref postprocessing
 */

#ifndef _JANUS_PP_WEBM
#define _JANUS_PP_WEBM

#include <stdio.h>

#include "pp-rtp.h"

/* WebM stuff */
int janus_pp_webm_create(char *destination);
int janus_pp_webm_preprocess(FILE *file, janus_pp_frame_packet *list);
int janus_pp_webm_process(FILE *file, janus_pp_frame_packet *list, int *working);
void janus_pp_webm_close(void);


#endif
