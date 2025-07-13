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

LTTNG_UST_TRACEPOINT_EVENT(
    DISC_TRACEPOINT_PROVIDER,
    data_writer_matched, // publisher found and matched an endpoint
    LTTNG_UST_TP_ARGS(
        const char *, service_name,
        int, service_id,
        int, test_id,
        int, current_count_change
        // int, pub_matched_status,
        // int, cur_pubs_matched,
        // int, total_pubs_matched
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, service_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, test_id, test_id)
        lttng_ust_field_integer(int, current_count_change,current_count_change)
        // lttng_ust_field_integer(int, pub_matched_status, pub_matched_status)
        // lttng_ust_field_integer(int, cur_pubs_matched, cur_pubs_matched)
        // lttng_ust_field_integer(int, total_pubs_matched, total_pubs_matched)
    )
)
LTTNG_UST_TRACEPOINT_EVENT(
    DISC_TRACEPOINT_PROVIDER,
    data_reader_matched, // subscriber found and matched
    LTTNG_UST_TP_ARGS(
        const char *, service_name,
        int, service_id,
        int, test_id,
        int, current_count_change
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, service_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, test_id, test_id)
        lttng_ust_field_integer(int, current_count_change,current_count_change)
    )
)

LTTNG_UST_TRACEPOINT_EVENT(
    DISC_TRACEPOINT_PROVIDER,
    init,
    LTTNG_UST_TP_ARGS(
        const char *, service_name,
        int, service_id,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, service_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

LTTNG_UST_TRACEPOINT_EVENT(
    DISC_TRACEPOINT_PROVIDER,
    participant_discovery,
    LTTNG_UST_TP_ARGS(
        const char *, service_name,
        int, service_id,
        int, test_id,
        int, discovery_status
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, service_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, test_id, test_id)
        lttng_ust_field_integer(int, discovery_status,discovery_status)
    )
)


LTTNG_UST_TRACEPOINT_EVENT(
    DISC_TRACEPOINT_PROVIDER,
    data_reader_discovery,
    LTTNG_UST_TP_ARGS(
        const char *, service_name,
        int, service_id,
        int, test_id,
        int, discovery_status
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, service_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, test_id, test_id)
        lttng_ust_field_integer(int, discovery_status,discovery_status)
    )
)

LTTNG_UST_TRACEPOINT_EVENT(
    DISC_TRACEPOINT_PROVIDER,
    data_writer_discovery,
    LTTNG_UST_TP_ARGS(
        const char *, service_name,
        int, service_id,
        int, test_id,
        int, discovery_status
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, service_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, test_id, test_id)
        lttng_ust_field_integer(int, discovery_status,discovery_status)
    )
)


#endif

#include <lttng/tracepoint-event.h>
