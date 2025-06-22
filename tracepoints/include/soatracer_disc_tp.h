#undef LTTNG_UST_TRACEPOINT_PROVIDER
#define LTTNG_UST_TRACEPOINT_PROVIDER soatracer_disc_trace_provider

#undef DISC_TRACEPOINT_PROVIDER
#define DISC_TRACEPOINT_PROVIDER soatracer_disc_trace_provider

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./soatracer_disc_tp.h"

#if !defined(_SOATRACER_DISC_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _SOATRACER_DISC_TP_H

#include <lttng/tracepoint.h>

LTTNG_UST_TRACEPOINT_EVENT(
    DISC_TRACEPOINT_PROVIDER,
    debug,
    TP_ARGS(const char*, message),
    TP_FIELDS(ctf_string(msg, message))
)

#endif

#include <lttng/tracepoint-event.h>
