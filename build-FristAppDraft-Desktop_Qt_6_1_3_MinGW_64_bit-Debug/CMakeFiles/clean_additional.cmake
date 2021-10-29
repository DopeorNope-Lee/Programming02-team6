# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FirstAppDraft_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FirstAppDraft_autogen.dir\\ParseCache.txt"
  "FirstAppDraft_autogen"
  )
endif()
