/*
  *
  **************************************************************************
  **                        STMicroelectronics				**
  **************************************************************************
  **                        marco.cali@st.com				**
  **************************************************************************
  *                                                                        *
  *                     FTS Gesture Utilities				   *
  *                                                                        *
  **************************************************************************
  **************************************************************************
  *
  */

/*!
  * \file ftsGesture.h
  * \brief Contains all the macro and prototypes to handle the Gesture Detection
  * features
  */


#ifndef FTS_GESTURE_H_
#define FTS_GESTURE_H_




#include "ftsHardware.h"

#define GESTURE_MASK_SIZE		4	/* /< number of bytes of the
						 * gesture mask */

#define GESTURE_MAX_COORDS_PAIRS_REPORT 100	/* /< max number of gestures
						 * coordinates pairs reported */



int updateGestureMask(u8 *mask, int size, int en);
int disableGesture(struct fts_ts_info *info, u8 *mask, int size);
int enableGesture(struct fts_ts_info *info, u8 *mask, int size);
int enterGestureMode(struct fts_ts_info *info, int reload);
int isAnyGestureActive(void);
int readGestureCoords(struct fts_ts_info *info, u8 *event);
int getGestureCoords(u16 **x, u16 **y);

#endif	/* ! _GESTURE_H_ */
