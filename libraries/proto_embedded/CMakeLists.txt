file(GLOB_RECURSE GEN_HEADERS "generated/*.h")
file(GLOB EAMS_HEADERS "src/*.h")
file(GLOB EAMS_SOURCE  "src/*.cpp")
file(GLOB HEADERS "include/koinos/*.hpp")
file(GLOB HEADERS "include/google/protobuf/*.h")
add_library(koinos_proto_embedded
            buffer.cpp
            ${EAMS_SOURCE}
            ${EAMS_HEADERS}
            ${GEN_SOURCE}
            ${HEADERS})
add_library(Koinos::proto_embedded ALIAS koinos_proto_embedded)

target_include_directories(koinos_proto_embedded PUBLIC
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/generated>
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
   $<INSTALL_INTERFACE:include>
)

install(
   DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/"
   DESTINATION "include/"
   FILES_MATCHING PATTERN "*.hpp" )

install(
   DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/"
   DESTINATION "include/"
   FILES_MATCHING PATTERN "*.h" )

install(
   DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/src/"
   DESTINATION "include/"
   FILES_MATCHING PATTERN "*.h" )

install(
   DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/generated/"
   DESTINATION "include/"
   FILES_MATCHING PATTERN "*.h" )

export(
   TARGETS ${KOINOS_LIB_TARGET_NAME}
   NAMESPACE Koinos::
   FILE ${KOINOS_LIB_CMAKE_PROJECT_TARGETS_FILE}
)

install(
   TARGETS ${KOINOS_LIB_TARGET_NAME}
   EXPORT ${KOINOS_LIB_TARGETS_EXPORT_NAME}
   INCLUDES DESTINATION ${KOINOS_LIB_INCLUDE_INSTALL_DIR}
   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)

install(
   EXPORT ${KOINOS_LIB_TARGETS_EXPORT_NAME}
   NAMESPACE Koinos::
   DESTINATION ${KOINOS_LIB_CONFIG_INSTALL_DIR}
)
