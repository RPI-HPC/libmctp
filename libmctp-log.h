/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */

#ifndef _LIBMCTP_LOG_H
#define _LIBMCTP_LOG_H

/* libmctp-internal logging */

void mctp_prlog(int level, const char *fmt, ...)
	__attribute__((format(printf, 2, 3)));

#define mctp_prerr(fmt, ...)  mctp_prlog(MCTP_LOG_ERR, fmt, ##__VA_ARGS__)
#define mctp_prwarn(fmt, ...) mctp_prlog(MCTP_LOG_WARNING, fmt, ##__VA_ARGS__)
#define mctp_prinfo(fmt, ...) mctp_prlog(MCTP_LOG_INFO, fmt, ##__VA_ARGS__)
#define mctp_prdebug(fmt, ...)  mctp_prlog(MCTP_LOG_DEBUG, fmt, ##__VA_ARGS__)


#endif /* _LIBMCTP_LOG_H */
