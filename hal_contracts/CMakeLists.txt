#--------------------------------- FILE INFO ----------------------------------#
# Filename           : CMakeLists.txt                                          #
#                                                                              #
# CMakeLists.txt file for hal_contracts files                                  #
#                                                                              #
#------------------------------------------------------------------------------#
add_library(hal_contracts_lib INTERFACE)

target_include_directories(hal_contracts_lib INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)
