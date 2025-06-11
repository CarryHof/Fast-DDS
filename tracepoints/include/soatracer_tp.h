#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER soatracer_trace_provider

#undef DISCOVERY_TRACEPOINT_PROVIDER
#define DISCOVERY_TRACEPOINT_PROVIDER soatracer_trace_provider

#undef LTTNG_UST_TRACEPOINT_INCLUDE
#define LTTNG_UST_TRACEPOINT_INCLUDE "./soatracer_tp.h"
#if !defined(_SOATRACER_TP_H) || defined(LTTNG_UST_TRACEPOINT_HEADER_MULTI_READ)
#define _SOATRACER_TP_H

#include <lttng/tracepoint.h>

// init
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    init,
    LTTNG_UST_TP_ARGS(
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// -------------------------------------------------------------------------------------

// discovery msg
// pre discovery publish
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    discovery_pre_publish,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, msg_id,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// after discovery publish
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    discovery_after_publish,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, msg_id,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// after receiving discovery msg
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    discovery_received,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, msg_id,
        int, pub_id,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, pub_id, pub_id)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// -------------------------------------------------------------------------------------

// normal publish
// pre publish
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    pre_publish,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, msg_id,
        int, seq_num,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, seq_num, seq_num)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// after publish
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    after_publish,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, msg_id,
        int, seq_num,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, seq_num, seq_num)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// published all
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    published_all,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, msg_id,
        int, seq_num,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, seq_num, seq_num)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// -------------------------------------------------------------------------------------

// init subscriber process simulate timer
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    init_proc_timer,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// current msg processed
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    curr_msg_proc,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, msg_id,
        int, process_id,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, process_id, process_id)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// pre subscribing
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    pre_subscribing,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// after receiving
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    after_receiving,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, msg_count,
        int, msg_id,
        int, pub_id,
        int, seq_num,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, msg_count, msg_count)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, pub_id, pub_id)
        lttng_ust_field_integer(int, seq_num, seq_num)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// after receiving all expected data
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    after_receiving_cond,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, msg_count,
        int, msg_id,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, msg_count, msg_count)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// periodic processing
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    periodic_processing,
    LTTNG_UST_TP_ARGS(
        int, process_id,
        const char *, topic_name,
        int, service_id,
        int, msg_count,
        int, msg_id,
        int, seq_num,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, process_id, process_id)
        lttng_ust_field_integer(int, msg_count, msg_count)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, seq_num, seq_num)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

// received all
LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    received_all,
    LTTNG_UST_TP_ARGS(
        const char *, topic_name,
        int, service_id,
        int, msg_count,
        int, msg_id,
        int, seq_num,
        int, test_id
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(service_name, topic_name)
        lttng_ust_field_integer(int, service_id, service_id)
        lttng_ust_field_integer(int, msg_count, msg_count)
        lttng_ust_field_integer(int, msg_id, msg_id)
        lttng_ust_field_integer(int, seq_num, seq_num)
        lttng_ust_field_integer(int, test_id, test_id)
    )
)

LTTNG_UST_TRACEPOINT_EVENT(
    TRACEPOINT_PROVIDER,
    machine_stats,
    LTTNG_UST_TP_ARGS(
        double, cpu_usage,
        double, memory_usage
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_float(double, cpu_usage, cpu_usage)
        lttng_ust_field_float(double, memory_usage, memory_usage)
    )
)



// -----------------------Tracepoint Events for Discovery Analysis----------------------------------

LTTNG_UST_TRACEPOINT_EVENT(
    DISCOVERY_TRACEPOINT_PROVIDER,
    after_init,
    LTTNG_UST_TP_ARGS(
        int, my_integer_arg,
        char *, my_string_arg
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(my_string_field, my_string_arg)
        lttng_ust_field_integer(int, my_integer_field, my_integer_arg)
    )
)


LTTNG_UST_TRACEPOINT_EVENT(
    DISCOVERY_TRACEPOINT_PROVIDER,
    after_discovery_event_1,
    LTTNG_UST_TP_ARGS(
        int, my_integer_arg,
        char *, my_string_arg
    ),
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(my_string_field, my_string_arg)
        lttng_ust_field_integer(int, my_integer_field, my_integer_arg)
    )
)


#endif /* _SOATRACER_TP_H */

#include <lttng/tracepoint-event.h>