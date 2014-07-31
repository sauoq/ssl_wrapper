// Copyright (c) 2014 Cesanta Software Limited
// All rights reserved
//
// This software is dual-licensed: you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation. For the terms of this
// license, see <http://www.gnu.org/licenses/>.
//
// You are free to use this software under the terms of the GNU General
// Public License, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU General Public License for more details.
//
// Alternatively, you can license this software under a commercial
// license, as set out in <http://cesanta.com/products.html>.

#ifndef SSL_WRAPPER_HEADER_INCLUDED
#define SSL_WRAPPER_HEADER_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

struct ssl_wrapper_config {
  const char *target_host;          // Real destination host
  int target_port;                  // Real destination port
  int target_uses_ssl;              // 1 if destination uses SSL, otherwise 0
  const char *ssl_ca_cert;          // Use two-way SSL with this CA certificate
  const char *listening_port;       // Listening port for this wrapper
  const char *ssl_cert;             // If non-NULL, listening port is SSL
};

const char *ssl_wrapper_serve(struct ssl_wrapper_config *);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // SSL_WRAPPER_HEADER_INCLUDED
