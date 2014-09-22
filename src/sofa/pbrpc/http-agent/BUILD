cc_library(
  name = 'httpagent',
  srcs = [
    'http_agent.cc',
  ],
  deps = '//sofa-pbrpc:sofa-pbrpc'
)

cc_binary(
  name = 'sofa_pbrpc_client',
  srcs = [
    'sofa_pbrpc_client.cc',
  ],
  deps = ':httpagent'
)
