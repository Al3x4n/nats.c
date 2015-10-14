// Copyright 2015 Apcera Inc. All rights reserved.

#ifndef STATUS_H_
#define STATUS_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    DISCONNECTED = 0,
    CONNECTING,
    CONNECTED,
    CLOSED,
    RECONNECTING

} natsConnStatus;


typedef enum
{
    NATS_OK         = 0,

    NATS_ERR,
    NATS_PROTOCOL_ERROR,
    NATS_IO_ERROR,
    NATS_LINE_TOO_LONG,

    NATS_CONNECTION_CLOSED,
    NATS_NO_SERVER,
    NATS_STALE_CONNECTION,
    NATS_SECURE_CONNECTION_REQUIRED,

    NATS_NOT_PERMITTED,
    NATS_NOT_FOUND,

    NATS_ADDRESS_MISSING,

    NATS_INVALID_SUBJECT,
    NATS_INVALID_ARG,
    NATS_INVALID_SUBSCRIPTION,
    NATS_INVALID_TIMEOUT,

    NATS_ILLEGAL_STATE,

    NATS_SLOW_CONSUMER,

    NATS_MAX_PAYLOAD,
    NATS_MAX_DELIVERED_MSGS,

    NATS_INSUFFICIENT_BUFFER,

    NATS_NO_MEMORY,

    NATS_SYS_ERROR,

    NATS_TIMEOUT,

    NATS_FAILED_TO_INITIALIZE,
    NATS_NOT_INITIALIZED

} natsStatus;

const char*
natsStatus_GetText(natsStatus s);

#ifdef __cplusplus
}
#endif

#endif /* STATUS_H_ */
