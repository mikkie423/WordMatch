# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\WordMatch_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\WordMatch_autogen.dir\\ParseCache.txt"
  "WordMatch_autogen"
  )
endif()
