/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Wed Aug 22 08:54:05 2018. */

#include "dustMeasurement.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t protobuf_dustSensorMeasurement_fields[5] = {
    PB_FIELD(  1, FLOAT   , REQUIRED, STATIC  , FIRST, protobuf_dustSensorMeasurement, particularMatter2_5um, particularMatter2_5um, 0),
    PB_FIELD(  2, FLOAT   , REQUIRED, STATIC  , OTHER, protobuf_dustSensorMeasurement, particularMatter10um, particularMatter2_5um, 0),
    PB_FIELD(  3, FLOAT   , REQUIRED, STATIC  , OTHER, protobuf_dustSensorMeasurement, temperature, particularMatter10um, 0),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, protobuf_dustSensorMeasurement, humidity, temperature, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
