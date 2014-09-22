proto_library(
  name = 'test_data_proto',
  srcs = 'test_data.proto'
)

cc_test(
  name = 'test_atomic',
  srcs = [
    'test_atomic.cc',
  ],
  deps = [
    ':test_data_proto',
    '//sofa-pbrpc:sofa-pbrpc',
  ]
)

cc_test(
  name = 'test_closure',
  srcs = [
    'test_closure.cc',
  ],
  deps = [
    ':test_data_proto',
    '//sofa-pbrpc:sofa-pbrpc',
  ]
)

cc_test(
  name = 'test_common',
  srcs = [
    'test_common.cc',
  ],
  deps = [
    ':test_data_proto',
    '//sofa-pbrpc:sofa-pbrpc',
  ]
)

cc_test(
  name = 'test_epoll_support',
  srcs = [
    'test_epoll_support.cc',
  ],
  deps = [
    ':test_data_proto',
    '//sofa-pbrpc:sofa-pbrpc',
  ]
)

cc_test(
  name = 'test_ext_closure',
  srcs = [
    'test_ext_closure.cc',
  ],
  deps = [
    ':test_data_proto',
    '//sofa-pbrpc:sofa-pbrpc',
  ]
)

cc_test(
  name = 'test_thread_group',
  srcs = [
    'test_thread_group.cc',
  ],
  deps = [
    ':test_data_proto',
    '//sofa-pbrpc:sofa-pbrpc',
  ]
)

cc_test(
  name = 'test_timeout_manager',
  srcs = [
    'test_timeout_manager.cc',
  ],
  deps = [
    ':test_data_proto',
    '//sofa-pbrpc:sofa-pbrpc',
  ]
)

cc_test(
  name = 'test_tran_buf_pool',
  srcs = [
    'test_tran_buf_pool.cc',
  ],
  deps = [
    ':test_data_proto',
    '//sofa-pbrpc:sofa-pbrpc',
  ]
)
