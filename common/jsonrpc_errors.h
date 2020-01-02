/* common/jsonrpc_errors.h
 * Lists error codes for JSON-RPC.
 */
#ifndef LIGHTNING_COMMON_JSONRPC_ERRORS_H
#define LIGHTNING_COMMON_JSONRPC_ERRORS_H

#include "config.h"

#include <common/errcode.h>

/* Standard errors defined by JSON-RPC 2.0 standard */
static const errcode_t JSONRPC2_INVALID_REQUEST = -32600;
static const errcode_t JSONRPC2_METHOD_NOT_FOUND = -32601;
static const errcode_t JSONRPC2_INVALID_PARAMS = -32602;

/* Uncategorized error.
 * FIXME: This should be replaced in all places
 * with a specific error code, and then removed.
 */
static const errcode_t LIGHTNINGD = -1;

/* Developer error in the parameters to param() call */
static const errcode_t PARAM_DEV_ERROR = -2;

/* Plugin returned an error */
static const errcode_t PLUGIN_ERROR = -3;

/* Errors from `pay`, `sendpay`, or `waitsendpay` commands */
static const errcode_t PAY_IN_PROGRESS = 200;
static const errcode_t PAY_RHASH_ALREADY_USED = 201;
static const errcode_t PAY_UNPARSEABLE_ONION = 202;
static const errcode_t PAY_DESTINATION_PERM_FAIL = 203;
static const errcode_t PAY_TRY_OTHER_ROUTE = 204;
static const errcode_t PAY_ROUTE_NOT_FOUND = 205;
static const errcode_t PAY_ROUTE_TOO_EXPENSIVE = 206;
static const errcode_t PAY_INVOICE_EXPIRED = 207;
static const errcode_t PAY_NO_SUCH_PAYMENT = 208;
static const errcode_t PAY_UNSPECIFIED_ERROR = 209;
static const errcode_t PAY_STOPPED_RETRYING = 210;

/* `fundchannel` or `withdraw` errors */
static const errcode_t FUND_MAX_EXCEEDED = 300;
static const errcode_t FUND_CANNOT_AFFORD = 301;
static const errcode_t FUND_OUTPUT_IS_DUST = 302;
static const errcode_t FUNDING_BROADCAST_FAIL = 303;
static const errcode_t FUNDING_STILL_SYNCING_BITCOIN = 304;
static const errcode_t FUNDING_PEER_NOT_CONNECTED = 305;
static const errcode_t FUNDING_UNKNOWN_PEER = 306;

/* `connect` errors */
static const errcode_t CONNECT_NO_KNOWN_ADDRESS = 400;
static const errcode_t CONNECT_ALL_ADDRESSES_FAILED = 401;

/* bitcoin-cli plugin errors */
#define BCLI_ERROR                      400

/* Errors from `invoice` command */
static const errcode_t INVOICE_LABEL_ALREADY_EXISTS = 900;
static const errcode_t INVOICE_PREIMAGE_ALREADY_EXISTS = 901;
static const errcode_t INVOICE_HINTS_GAVE_NO_ROUTES = 902;
static const errcode_t INVOICE_EXPIRED_DURING_WAIT = 903;
static const errcode_t INVOICE_WAIT_TIMED_OUT = 904;

#endif /* LIGHTNING_COMMON_JSONRPC_ERRORS_H */
