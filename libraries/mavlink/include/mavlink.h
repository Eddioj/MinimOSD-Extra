/** @file
 *	@brief MAVLink comm protocol built from ardupilotmega.xml
 *	@see http://pixhawk.ethz.ch/software/mavlink
 */
#ifndef MAVLINK_H
#define MAVLINK_H

#ifndef MAVLINK_STX
#define MAVLINK_STX 254
#endif

#ifndef MAVLINK_ENDIAN
#define MAVLINK_ENDIAN MAVLINK_LITTLE_ENDIAN
#endif

#ifndef MAVLINK_ALIGNED_FIELDS
#define MAVLINK_ALIGNED_FIELDS 1
#endif

#ifndef MAVLINK_CRC_EXTRA
#define MAVLINK_CRC_EXTRA 1
#endif

/*#ifndef MAVLINK_USE_CONVENIENCE_FUNCTIONS
#define MAVLINK_USE_CONVENIENCE_FUNCTIONS
#endif*/

#include "ardupilotmega/ardupilotmega.h"
#include "protocol.h"

/// MAVLink system definition
//extern mavlink_system_t mavlink_system;

#endif // MAVLINK_H
