



project(03-runtime)



set(SOURCES
        # value_capture.cpp
#        lambda_reference_capture
#        lambda_expression_capture
        std-function.cpp
)


add_executable(${PROJECT_NAME} ${SOURCES})