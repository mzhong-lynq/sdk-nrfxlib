/*
 * Copyright (c) 2016 - 2024 Nordic Semiconductor ASA
 * Copyright (c) since 2013 Oberon microsystems AG
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */


/**
 * @defgroup ocrypto_lms_sha256 LMS-SHA256 / HSS-SHA256
 * @ingroup ocrypto_asym_sig
 * @{
 * @brief LMS and HSS are stateful signature algorithms (SHA hashing used).
 *
 * All SHA256 based parameter sets defined by NIST.SP.800-208 are supported.
 * Both SHA256-192 and SHA256-256 are supported.
 *
 * @see [NIST - Special Publication 800-208](https://csrc.nist.gov/pubs/sp/800/208/final)
 */

/**
 * @file
 * @brief LMS-SHA256 / HSS-SHA256.
 *
 * LMS and HSS are stateful PQC signature algorithms.
 */

#ifndef OCRYPTO_LMS_SHA256_H
#define OCRYPTO_LMS_SHA256_H

#include <stddef.h>
#include <stdint.h>


#ifdef __cplusplus
extern "C" {
#endif

  
/**
 * LMS-SHA256 signature verification.
 *
 * The signature @p sig of the input message @p msg is verified using the
 * signer's public key @p pk.
 *
 * @param sig     Input signature.
 * @param sig_len Length of @p sig.
 * @param msg     Input message.
 * @param msg_len Length of @p msg.
 * @param pk      Signer's public key.
 * @param pk_len  Length of @p pk.
 *
 * @retval 0  If the signature is valid.
 * @retval -1 Otherwise.
 */
int ocrypto_lms_sha256_verify(
    const uint8_t *sig, size_t sig_len,
    const uint8_t *msg, size_t msg_len,
    const uint8_t *pk,  size_t pk_len);

/**
 * HSS-SHA256 hierarchical signature verification.
 *
 * The signature @p sig of the input message @p msg is verified using the
 * signer's public key @p pk.
 *
 * @param sig     Input signature.
 * @param sig_len Length of @p sig.
 * @param msg     Input message.
 * @param msg_len Length of @p msg.
 * @param pk      Signer's public key.
 * @param pk_len  Length of @p pk.
 *
 * @retval 0  If the signature is valid.
 * @retval -1 Otherwise.
 */
int ocrypto_hss_sha256_verify(
    const uint8_t *sig, size_t sig_len,
    const uint8_t *msg, size_t msg_len,
    const uint8_t *pk,  size_t pk_len);


#ifdef __cplusplus
}
#endif

#endif

/** @} */
