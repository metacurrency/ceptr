/**
 * @ingroup def
 *
 * @file base_defs.h
 * @brief auto-generated system definitions
 *
 * NOTE: this file is auto-generated by base_defs.pl
 *
 * @copyright Copyright (C) 2013-2016, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 */

#ifndef _CEPTR_BASE_DEFS_H
#define _CEPTR_BASE_DEFS_H
#include "sys_defs.h"

void base_defs(SemTable *sem);
void base_contexts(SemTable *sem);
SemanticID SYS_RECEPTOR;
SemanticID COMPOSITORY;
SemanticID DEV_COMPOSITORY;
SemanticID TEST_RECEPTOR;
SemanticID CLOCK_RECEPTOR;
SemanticID STREAM_EDGE;
SemanticID INTERNET;

enum SemanticContexts {SYS_CONTEXT,COMPOSITORY_CONTEXT,DEV_COMPOSITORY_CONTEXT,TEST_CONTEXT,CLOCK_CONTEXT,STREAM_EDGE_CONTEXT,INTERNET_CONTEXT,_NUM_DEFAULT_CONTEXTS};

/**********************************************************************************/
// SYS:Symbol
enum SYSSymbolIDs {
    NULL_SYMBOL_ID,
    STRUCTURES_ID,
    SYMBOLS_ID,
    PROCESSES_ID,
    PROTOCOLS_ID,
    RECEPTORS_ID,
    SCAPES_ID,
    DEFINITIONS_ID,
    STRUCTURE_SYMBOL_ID,
    STRUCTURE_SEQUENCE_ID,
    STRUCTURE_OR_ID,
    STRUCTURE_ZERO_OR_MORE_ID,
    STRUCTURE_ONE_OR_MORE_ID,
    SYMBOL_OF_STRUCTURE_ID,
    STRUCTURE_ANYTHING_ID,
    STRUCTURE_LABEL_ID,
    STRUCTURE_DEFINITION_ID,
    STRUCTURE_ZERO_OR_ONE_ID,
    SYMBOL_STRUCTURE_ID,
    SYMBOL_LABEL_ID,
    SYMBOL_DEFINITION_ID,
    BOOLEAN_ID,
    SEMTREX_MATCH_PATH_ID,
    SEMTREX_SYMBOL_LITERAL_ID,
    SEMTREX_SYMBOL_LITERAL_NOT_ID,
    SEMTREX_SEQUENCE_ID,
    SEMTREX_OR_ID,
    SEMTREX_NOT_ID,
    SEMTREX_SYMBOL_ANY_ID,
    SEMTREX_ZERO_OR_MORE_ID,
    SEMTREX_ONE_OR_MORE_ID,
    SEMTREX_ZERO_OR_ONE_ID,
    SEMTREX_VALUE_LITERAL_ID,
    SEMTREX_VALUE_LITERAL_NOT_ID,
    SEMTREX_GROUP_ID,
    SEMTREX_WALK_ID,
    SEMTREX_DESCEND_ID,
    SEMTREX_SYMBOL_ID,
    SEMTREX_SYMBOL_SET_ID,
    SEMTREX_VALUE_SET_ID,
    SEMTREX_MATCH_ID,
    SEMTREX_MATCH_CURSOR_ID,
    SEMTREX_MATCH_RESULTS_ID,
    SEMTREX_MATCH_SYMBOL_ID,
    SEMTREX_MATCH_SIBLINGS_COUNT_ID,
    ASCII_CHAR_ID,
    ASCII_CHARS_ID,
    ASCII_STR_ID,
    RECEPTOR_XADDR_ID,
    EXPECTATIONS_ID,
    SIGNALS_ID,
    DEFAULT_ASPECT_ID,
    FLUX_ID,
    SCAPE_SPEC_ID,
    ASPECT_IDENT_ID,
    ASPECT_TYPE_ID,
    ASPECT_LABEL_ID,
    ASPECT_DEF_ID,
    ASPECTS_ID,
    CARRIER_ID,
    BODY_ID,
    SIGNAL_UUID_ID,
    IN_RESPONSE_TO_UUID_ID,
    RECEPTOR_PATH_ID,
    RECEPTOR_PATHS_ID,
    RECEPTOR_ADDR_ID,
    FROM_ADDRESS_ID,
    TO_ADDRESS_ID,
    END_CONDITIONS_ID,
    ENVELOPE_ID,
    SIGNAL_ID,
    PENDING_SIGNALS_ID,
    CODE_PATH_ID,
    PROCESS_IDENT_ID,
    WAKEUP_REFERENCE_ID,
    PENDING_RESPONSE_ID,
    PENDING_RESPONSES_ID,
    RESPONSE_CARRIER_ID,
    PATTERN_ID,
    ACTION_ID,
    PARAMS_ID,
    SEMANTIC_MAP_ID,
    EXPECTATION_ID,
    TRANSCODER_ID,
    OPERATOR_ID,
    VALIDATOR_ID,
    PROCESS_OF_STRUCTURE_ID,
    PROCESS_OF_SYMBOL_ID,
    PROCESS_OF_PROCESS_ID,
    PROCESS_OF_ID,
    PROCESS_TYPE_ID,
    PROCESS_LINK_ID,
    PROCESS_NAME_ID,
    PROCESS_INTENTION_ID,
    PROCESS_SIGNATURE_ID,
    CODE_ID,
    PROCESS_DEFINITION_ID,
    GOAL_ID,
    ROLE_ID,
    USAGE_ID,
    WEAL_ID,
    SLOT_IS_VALUE_OF_ID,
    SLOT_CHILDREN_ID,
    SLOT_ID,
    REPLACEMENT_VALUE_ID,
    SEMANTIC_LINK_ID,
    SIGNATURE_LABEL_ID,
    SIGNATURE_STRUCTURE_ID,
    SIGNATURE_SYMBOL_ID,
    SIGNATURE_PROCESS_ID,
    SIGNATURE_PASSTHRU_ID,
    SIGNATURE_ANY_ID,
    SIGNATURE_OPTIONAL_ID,
    SIGNATURE_OUTPUT_TYPE_ID,
    SIGNATURE_INPUT_TYPE_ID,
    INPUT_SIGNATURE_ID,
    OUTPUT_SIGNATURE_ID,
    EXPECTED_SLOT_ID,
    TEMPLATE_SIGNATURE_ID,
    RUN_TREE_ID,
    PARAM_REF_ID,
    SIGNAL_REF_ID,
    RESULT_SYMBOL_ID,
    REDUCTION_ERROR_SYMBOL_ID,
    SOURCE_ID,
    DESTINATION_ID,
    EXPECT_ID,
    INITIATE_ID,
    PNAME_ID,
    INCLUSION_ID,
    WHICH_INTERACTION_ID,
    ACTUAL_PROCESS_ID,
    ACTUAL_RECEPTOR_ID,
    ACTUAL_SYMBOL_ID,
    ACTUAL_PROTOCOL_ID,
    ACTUAL_VALUE_ID,
    WHICH_PROCESS_ID,
    WHICH_RECEPTOR_ID,
    WHICH_SYMBOL_ID,
    WHICH_PROTOCOL_ID,
    WHICH_VALUE_ID,
    RESOLUTION_ID,
    WHICH_GOAL_ID,
    WHICH_ROLE_ID,
    WHICH_USAGE_ID,
    WHICH_WEAL_ID,
    CONNECTION_ID,
    PROTOCOL_BINDINGS_ID,
    PROTOCOL_LABEL_ID,
    PROTOCOL_SEMANTICS_ID,
    PROTOCOL_DEFINITION_ID,
    MANIFEST_LABEL_ID,
    MANIFEST_SPEC_ID,
    MANIFEST_PAIR_ID,
    MANIFEST_ID,
    RECEPTOR_IDENTIFIER_ID,
    RECEPTOR_PACKAGE_ID,
    BINDING_PAIR_ID,
    BINDINGS_ID,
    RECEPTOR_ELAPSED_TIME_ID,
    RECEPTOR_LABEL_ID,
    RECEPTOR_DEFINITION_ID,
    RECEPTOR_STATE_ID,
    PARENT_CONTEXT_NUM_ID,
    CONTEXT_NUM_ID,
    INSTANCE_OF_ID,
    RECEPTOR_INSTANCE_ID,
    SERIALIZED_RECEPTOR_ID,
    ACTIVE_RECEPTORS_ID,
    SYS_STATE_ID,
    YEAR_ID,
    MONTH_ID,
    DAY_ID,
    HOUR_ID,
    MINUTE_ID,
    SECOND_ID,
    TODAY_ID,
    NOW_ID,
    TICK_ID,
    DATE_DIVIDER_ID,
    US_SHORT_DATE_ID,
    ERROR_LOCATION_ID,
    ZERO_DIVIDE_ERR_ID,
    TOO_FEW_PARAMS_ERR_ID,
    TOO_MANY_PARAMS_ERR_ID,
    SIGNATURE_MISMATCH_ERR_ID,
    NOT_A_PROCESS_ERR_ID,
    NOT_IN_SIGNAL_CONTEXT_ERR_ID,
    INCOMPATIBLE_TYPE_ERR_ID,
    UNIX_ERRNO_ERR_ID,
    DEAD_STREAM_READ_ERR_ID,
    MISSING_SEMANTIC_MAP_ERR_ID,
    MISMATCH_SEMANTIC_MAP_ERR_ID,
    STRUCTURE_MISMATCH_ERR_ID,
    WHICH_XADDR_ID,
    NEW_TYPE_ID,
    TIMEOUT_AT_ID,
    COUNT_ID,
    UNLIMITED_ID,
    REPETITIONS_ID,
    ITERATE_ON_SYMBOL_ID,
    ITERATION_DATA_ID,
    BLOCK_ID,
    TRANSCODE_TO_ID,
    STX_SL_ID,
    STX_OP_ID,
    STX_CP_ID,
    STX_SET_ID,
    STX_OS_ID,
    STX_CS_ID,
    STX_LABEL_ID,
    STX_OG_ID,
    STX_CG_ID,
    STX_EQ_ID,
    STX_NEQ_ID,
    STX_WALK_ID,
    STX_STAR_ID,
    STX_PLUS_ID,
    STX_Q_ID,
    STX_OR_ID,
    STX_COMMA_ID,
    STX_EXCEPT_ID,
    STX_NOT_ID,
    STX_VAL_S_ID,
    STX_VAL_C_ID,
    STX_VAL_I_ID,
    STX_VAL_F_ID,
    STX_TOKENS_ID,
    STX_SIBS_ID,
    STX_CHILD_ID,
    STX_POSTFIX_ID,
    TREE_DELTA_PATH_ID,
    TREE_DELTA_VALUE_ID,
    TREE_DELTA_COUNT_ID,
    TREE_DELTA_ADD_ID,
    TREE_DELTA_REPLACE_ID,
    INSTANCES_ID,
    SYMBOL_INSTANCES_ID,
    DELETED_INSTANCE_ID,
    NUM_SYS_SYMBOLS
};
SemanticID STRUCTURES;
SemanticID SYMBOLS;
SemanticID PROCESSES;
SemanticID PROTOCOLS;
SemanticID RECEPTORS;
SemanticID SCAPES;
SemanticID DEFINITIONS;
SemanticID STRUCTURE_SYMBOL;
SemanticID STRUCTURE_SEQUENCE;
SemanticID STRUCTURE_OR;
SemanticID STRUCTURE_ZERO_OR_MORE;
SemanticID STRUCTURE_ONE_OR_MORE;
SemanticID SYMBOL_OF_STRUCTURE;
SemanticID STRUCTURE_ANYTHING;
SemanticID STRUCTURE_LABEL;
SemanticID STRUCTURE_DEFINITION;
SemanticID STRUCTURE_ZERO_OR_ONE;
SemanticID SYMBOL_STRUCTURE;
SemanticID SYMBOL_LABEL;
SemanticID SYMBOL_DEFINITION;
SemanticID BOOLEAN;
SemanticID SEMTREX_MATCH_PATH;
SemanticID SEMTREX_SYMBOL_LITERAL;
SemanticID SEMTREX_SYMBOL_LITERAL_NOT;
SemanticID SEMTREX_SEQUENCE;
SemanticID SEMTREX_OR;
SemanticID SEMTREX_NOT;
SemanticID SEMTREX_SYMBOL_ANY;
SemanticID SEMTREX_ZERO_OR_MORE;
SemanticID SEMTREX_ONE_OR_MORE;
SemanticID SEMTREX_ZERO_OR_ONE;
SemanticID SEMTREX_VALUE_LITERAL;
SemanticID SEMTREX_VALUE_LITERAL_NOT;
SemanticID SEMTREX_GROUP;
SemanticID SEMTREX_WALK;
SemanticID SEMTREX_DESCEND;
SemanticID SEMTREX_SYMBOL;
SemanticID SEMTREX_SYMBOL_SET;
SemanticID SEMTREX_VALUE_SET;
SemanticID SEMTREX_MATCH;
SemanticID SEMTREX_MATCH_CURSOR;
SemanticID SEMTREX_MATCH_RESULTS;
SemanticID SEMTREX_MATCH_SYMBOL;
SemanticID SEMTREX_MATCH_SIBLINGS_COUNT;
SemanticID ASCII_CHAR;
SemanticID ASCII_CHARS;
SemanticID ASCII_STR;
SemanticID RECEPTOR_XADDR;
SemanticID EXPECTATIONS;
SemanticID SIGNALS;
SemanticID DEFAULT_ASPECT;
SemanticID FLUX;
SemanticID SCAPE_SPEC;
SemanticID ASPECT_IDENT;
SemanticID ASPECT_TYPE;
SemanticID ASPECT_LABEL;
SemanticID ASPECT_DEF;
SemanticID ASPECTS;
SemanticID CARRIER;
SemanticID BODY;
SemanticID SIGNAL_UUID;
SemanticID IN_RESPONSE_TO_UUID;
SemanticID RECEPTOR_PATH;
SemanticID RECEPTOR_PATHS;
SemanticID RECEPTOR_ADDR;
SemanticID FROM_ADDRESS;
SemanticID TO_ADDRESS;
SemanticID END_CONDITIONS;
SemanticID ENVELOPE;
SemanticID SIGNAL;
SemanticID PENDING_SIGNALS;
SemanticID CODE_PATH;
SemanticID PROCESS_IDENT;
SemanticID WAKEUP_REFERENCE;
SemanticID PENDING_RESPONSE;
SemanticID PENDING_RESPONSES;
SemanticID RESPONSE_CARRIER;
SemanticID PATTERN;
SemanticID ACTION;
SemanticID PARAMS;
SemanticID SEMANTIC_MAP;
SemanticID EXPECTATION;
SemanticID TRANSCODER;
SemanticID OPERATOR;
SemanticID VALIDATOR;
SemanticID PROCESS_OF_STRUCTURE;
SemanticID PROCESS_OF_SYMBOL;
SemanticID PROCESS_OF_PROCESS;
SemanticID PROCESS_OF;
SemanticID PROCESS_TYPE;
SemanticID PROCESS_LINK;
SemanticID PROCESS_NAME;
SemanticID PROCESS_INTENTION;
SemanticID PROCESS_SIGNATURE;
SemanticID CODE;
SemanticID PROCESS_DEFINITION;
SemanticID GOAL;
SemanticID ROLE;
SemanticID USAGE;
SemanticID WEAL;
SemanticID SLOT_IS_VALUE_OF;
SemanticID SLOT_CHILDREN;
SemanticID SLOT;
SemanticID REPLACEMENT_VALUE;
SemanticID SEMANTIC_LINK;
SemanticID SIGNATURE_LABEL;
SemanticID SIGNATURE_STRUCTURE;
SemanticID SIGNATURE_SYMBOL;
SemanticID SIGNATURE_PROCESS;
SemanticID SIGNATURE_PASSTHRU;
SemanticID SIGNATURE_ANY;
SemanticID SIGNATURE_OPTIONAL;
SemanticID SIGNATURE_OUTPUT_TYPE;
SemanticID SIGNATURE_INPUT_TYPE;
SemanticID INPUT_SIGNATURE;
SemanticID OUTPUT_SIGNATURE;
SemanticID EXPECTED_SLOT;
SemanticID TEMPLATE_SIGNATURE;
SemanticID RUN_TREE;
SemanticID PARAM_REF;
SemanticID SIGNAL_REF;
SemanticID RESULT_SYMBOL;
SemanticID REDUCTION_ERROR_SYMBOL;
SemanticID SOURCE;
SemanticID DESTINATION;
SemanticID EXPECT;
SemanticID INITIATE;
SemanticID PNAME;
SemanticID INCLUSION;
SemanticID WHICH_INTERACTION;
SemanticID ACTUAL_PROCESS;
SemanticID ACTUAL_RECEPTOR;
SemanticID ACTUAL_SYMBOL;
SemanticID ACTUAL_PROTOCOL;
SemanticID ACTUAL_VALUE;
SemanticID WHICH_PROCESS;
SemanticID WHICH_RECEPTOR;
SemanticID WHICH_SYMBOL;
SemanticID WHICH_PROTOCOL;
SemanticID WHICH_VALUE;
SemanticID RESOLUTION;
SemanticID WHICH_GOAL;
SemanticID WHICH_ROLE;
SemanticID WHICH_USAGE;
SemanticID WHICH_WEAL;
SemanticID CONNECTION;
SemanticID PROTOCOL_BINDINGS;
SemanticID PROTOCOL_LABEL;
SemanticID PROTOCOL_SEMANTICS;
SemanticID PROTOCOL_DEFINITION;
SemanticID MANIFEST_LABEL;
SemanticID MANIFEST_SPEC;
SemanticID MANIFEST_PAIR;
SemanticID MANIFEST;
SemanticID RECEPTOR_IDENTIFIER;
SemanticID RECEPTOR_PACKAGE;
SemanticID BINDING_PAIR;
SemanticID BINDINGS;
SemanticID RECEPTOR_ELAPSED_TIME;
SemanticID RECEPTOR_LABEL;
SemanticID RECEPTOR_DEFINITION;
SemanticID RECEPTOR_STATE;
SemanticID PARENT_CONTEXT_NUM;
SemanticID CONTEXT_NUM;
SemanticID INSTANCE_OF;
SemanticID RECEPTOR_INSTANCE;
SemanticID SERIALIZED_RECEPTOR;
SemanticID ACTIVE_RECEPTORS;
SemanticID SYS_STATE;
SemanticID YEAR;
SemanticID MONTH;
SemanticID DAY;
SemanticID HOUR;
SemanticID MINUTE;
SemanticID SECOND;
SemanticID TODAY;
SemanticID NOW;
SemanticID TICK;
SemanticID DATE_DIVIDER;
SemanticID US_SHORT_DATE;
SemanticID ERROR_LOCATION;
SemanticID ZERO_DIVIDE_ERR;
SemanticID TOO_FEW_PARAMS_ERR;
SemanticID TOO_MANY_PARAMS_ERR;
SemanticID SIGNATURE_MISMATCH_ERR;
SemanticID NOT_A_PROCESS_ERR;
SemanticID NOT_IN_SIGNAL_CONTEXT_ERR;
SemanticID INCOMPATIBLE_TYPE_ERR;
SemanticID UNIX_ERRNO_ERR;
SemanticID DEAD_STREAM_READ_ERR;
SemanticID MISSING_SEMANTIC_MAP_ERR;
SemanticID MISMATCH_SEMANTIC_MAP_ERR;
SemanticID STRUCTURE_MISMATCH_ERR;
SemanticID WHICH_XADDR;
SemanticID NEW_TYPE;
SemanticID TIMEOUT_AT;
SemanticID COUNT;
SemanticID UNLIMITED;
SemanticID REPETITIONS;
SemanticID ITERATE_ON_SYMBOL;
SemanticID ITERATION_DATA;
SemanticID BLOCK;
SemanticID TRANSCODE_TO;
SemanticID STX_SL;
SemanticID STX_OP;
SemanticID STX_CP;
SemanticID STX_SET;
SemanticID STX_OS;
SemanticID STX_CS;
SemanticID STX_LABEL;
SemanticID STX_OG;
SemanticID STX_CG;
SemanticID STX_EQ;
SemanticID STX_NEQ;
SemanticID STX_WALK;
SemanticID STX_STAR;
SemanticID STX_PLUS;
SemanticID STX_Q;
SemanticID STX_OR;
SemanticID STX_COMMA;
SemanticID STX_EXCEPT;
SemanticID STX_NOT;
SemanticID STX_VAL_S;
SemanticID STX_VAL_C;
SemanticID STX_VAL_I;
SemanticID STX_VAL_F;
SemanticID STX_TOKENS;
SemanticID STX_SIBS;
SemanticID STX_CHILD;
SemanticID STX_POSTFIX;
SemanticID TREE_DELTA_PATH;
SemanticID TREE_DELTA_VALUE;
SemanticID TREE_DELTA_COUNT;
SemanticID TREE_DELTA_ADD;
SemanticID TREE_DELTA_REPLACE;
SemanticID INSTANCES;
SemanticID SYMBOL_INSTANCES;
SemanticID DELETED_INSTANCE;

/**********************************************************************************/
// SYS:Structure
enum SYSStructureIDs {
    NULL_STRUCTURE_ID,
    BIT_ID,
    INTEGER_ID,
    FLOAT_ID,
    CHAR_ID,
    CSTRING_ID,
    SYMBOL_ID,
    STRUCTURE_ID,
    PROCESS_ID,
    PROTOCOL_ID,
    RECEPTOR_ID,
    SCAPE_ID,
    ENUM_ID,
    TREE_PATH_ID,
    XADDR_ID,
    SURFACE_ID,
    TREE_ID,
    RECEPTOR_SURFACE_ID,
    SEMTREX_ID,
    STREAM_ID,
    UUID_ID,
    BLOB_ID,
    LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_PROTOCOLS_AND_RECEPTORS_AND_ZERO_OR_MORE_OF_SCAPES_ID,
    STRUCTURE_DEF_ID,
    TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF_ID,
    ZERO_OR_MORE_OF_STRUCTURE_DEFINITION_ID,
    ONE_OR_MORE_OF_STRUCTURE_DEF_ID,
    TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE_ID,
    ZERO_OR_MORE_OF_SYMBOL_DEFINITION_ID,
    SEMTREX_DEF_ID,
    ONE_OR_MORE_OF_SEMTREX_SYMBOL_ID,
    SEMTREX_SYMBOL_LITERAL_DEF_ID,
    ONE_OR_MORE_OF_SEMTREX_DEF_ID,
    PAIR_OF_SEMTREX_DEF_ID,
    ZERO_OR_ONE_OF_ANY_SYMBOL_ID,
    ONE_OR_MORE_OF_ANY_SYMBOL_ID,
    SEMTREX_VALUE_LITERAL_DEF_ID,
    ONE_OR_MORE_OF_ASCII_CHAR_ID,
    ASPECT_ID,
    ONE_OR_MORE_OF_STRUCTURE_OF_ASPECT_ID,
    TUPLE_OF_ASPECT_TYPE_AND_ASPECT_LABEL_ID,
    ONE_OR_MORE_OF_ASPECT_DEF_ID,
    ONE_OR_MORE_OF_RECEPTOR_PATH_ID,
    RECEPTOR_ADDRESS_ID,
    LIST_OF_FROM_ADDRESS_AND_TO_ADDRESS_AND_ASPECT_IDENT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID_ID,
    TUPLE_OF_ENVELOPE_AND_BODY_ID,
    ZERO_OR_MORE_OF_SIGNAL_ID,
    TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH_ID,
    LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS_ID,
    ZERO_OR_MORE_OF_PENDING_RESPONSE_ID,
    LIST_OF_CARRIER_AND_PATTERN_AND_ACTION_AND_PARAMS_AND_END_CONDITIONS_AND_ZERO_OR_ONE_OF_SEMANTIC_MAP_ID,
    ZERO_OR_MORE_OF_EXPECTATION_ID,
    LOGICAL_OR_OF_PROCESS_OF_STRUCTURE_AND_PROCESS_OF_SYMBOL_AND_PROCESS_OF_PROCESS_ID,
    LOGICAL_OR_OF_TRANSCODER_AND_OPERATOR_AND_VALIDATOR_ID,
    TUPLE_OF_PROCESS_OF_AND_PROCESS_TYPE_ID,
    ANY_SYMBOL_ID,
    LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_CODE_AND_PROCESS_SIGNATURE_AND_ZERO_OR_ONE_OF_PROCESS_LINK_ID,
    ZERO_OR_MORE_OF_PROCESS_DEFINITION_ID,
    SEMANTIC_REFERENCE_ID,
    SLOT_STRUCTURE_ID,
    TUPLE_OF_SEMANTIC_REFERENCE_AND_REPLACEMENT_VALUE_ID,
    LIST_OF_ONE_OR_MORE_OF_SEMANTIC_LINK_ID,
    LOGICAL_OR_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU_ID,
    SIGNATURE_SEMANTIC_VARIANTS_ID,
    TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL_ID,
    TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE_ID,
    TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE_ID,
    LIST_OF_ZERO_OR_MORE_OF_EXPECTED_SLOT_ID,
    PROCESS_FORM_ID,
    LIST_OF_CODE_AND_PARAMS_AND_ZERO_OR_ONE_OF_CODE_ID,
    ZERO_OR_MORE_OF_ANY_SYMBOL_ID,
    ONE_OR_MORE_OF_ROLE_ID,
    LIST_OF_ROLE_AND_SOURCE_AND_PATTERN_AND_ACTION_AND_ZERO_OR_ONE_OF_PARAMS_ID,
    LIST_OF_ROLE_AND_DESTINATION_AND_ACTION_ID,
    TUPLE_OF_PNAME_AND_ONE_OR_MORE_OF_LOGICAL_OR_OF_RESOLUTION_AND_CONNECTION_ID,
    INTERACTION_ID,
    ZERO_OR_MORE_OF_PROTOCOL_DEFINITION_ID,
    TUPLE_OF_GOAL_AND_ACTUAL_PROCESS_ID,
    TUPLE_OF_ROLE_AND_ACTUAL_RECEPTOR_ID,
    TUPLE_OF_USAGE_AND_ACTUAL_SYMBOL_ID,
    TUPLE_OF_WEAL_AND_ACTUAL_PROTOCOL_ID,
    TUPLE_OF_ACTUAL_SYMBOL_AND_ACTUAL_VALUE_ID,
    MAPPING_ID,
    PAIR_OF_GOAL_ID,
    PAIR_OF_ROLE_ID,
    PAIR_OF_USAGE_ID,
    PAIR_OF_WEAL_ID,
    LINKING_ID,
    ONE_OR_MORE_OF_RESOLUTION_ID,
    LIST_OF_ZERO_OR_MORE_OF_ROLE_AND_ZERO_OR_MORE_OF_GOAL_AND_ZERO_OR_MORE_OF_USAGE_AND_ZERO_OR_MORE_OF_WEAL_ID,
    LIST_OF_PROTOCOL_LABEL_AND_PROTOCOL_SEMANTICS_AND_ZERO_OR_MORE_OF_STRUCTURE_OF_INTERACTION_AND_ZERO_OR_MORE_OF_INCLUSION_ID,
    ZERO_OR_MORE_OF_STRUCTURE_OF_SCAPE_ID,
    TUPLE_OF_MANIFEST_LABEL_AND_MANIFEST_SPEC_ID,
    ONE_OR_MORE_OF_MANIFEST_PAIR_ID,
    LIST_OF_MANIFEST_AND_RECEPTOR_IDENTIFIER_AND_DEFINITIONS_ID,
    TUPLE_OF_MANIFEST_LABEL_AND_ANY_SYMBOL_ID,
    ONE_OR_MORE_OF_BINDING_PAIR_ID,
    RECEPTOR_IDENTITY_ID,
    TUPLE_OF_RECEPTOR_LABEL_AND_DEFINITIONS_ID,
    ZERO_OR_MORE_OF_RECEPTOR_DEFINITION_ID,
    LIST_OF_FLUX_AND_PENDING_SIGNALS_AND_PENDING_RESPONSES_AND_RECEPTOR_ELAPSED_TIME_ID,
    LIST_OF_INSTANCE_OF_AND_CONTEXT_NUM_AND_PARENT_CONTEXT_NUM_AND_RECEPTOR_STATE_ID,
    ZERO_OR_MORE_OF_RECEPTOR_XADDR_ID,
    LIST_OF_ACTIVE_RECEPTORS_ID,
    DATE_ID,
    TIME_ID,
    TIMESTAMP_ID,
    REDUCTION_ERROR_ID,
    LOGICAL_OR_OF_COUNT_AND_UNLIMITED_ID,
    TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS_ID,
    STX_TOKEN_LIST_ID,
    TREE_DELTA_ID,
    NUM_SYS_STRUCTURES
};
SemanticID BIT;
SemanticID INTEGER;
SemanticID FLOAT;
SemanticID CHAR;
SemanticID CSTRING;
SemanticID SYMBOL;
SemanticID STRUCTURE;
SemanticID PROCESS;
SemanticID PROTOCOL;
SemanticID RECEPTOR;
SemanticID SCAPE;
SemanticID ENUM;
SemanticID TREE_PATH;
SemanticID XADDR;
SemanticID SURFACE;
SemanticID TREE;
SemanticID RECEPTOR_SURFACE;
SemanticID SEMTREX;
SemanticID STREAM;
SemanticID UUID;
SemanticID BLOB;
SemanticID LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_PROTOCOLS_AND_RECEPTORS_AND_ZERO_OR_MORE_OF_SCAPES;
SemanticID STRUCTURE_DEF;
SemanticID TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF;
SemanticID ZERO_OR_MORE_OF_STRUCTURE_DEFINITION;
SemanticID ONE_OR_MORE_OF_STRUCTURE_DEF;
SemanticID TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE;
SemanticID ZERO_OR_MORE_OF_SYMBOL_DEFINITION;
SemanticID SEMTREX_DEF;
SemanticID ONE_OR_MORE_OF_SEMTREX_SYMBOL;
SemanticID SEMTREX_SYMBOL_LITERAL_DEF;
SemanticID ONE_OR_MORE_OF_SEMTREX_DEF;
SemanticID PAIR_OF_SEMTREX_DEF;
SemanticID ZERO_OR_ONE_OF_ANY_SYMBOL;
SemanticID ONE_OR_MORE_OF_ANY_SYMBOL;
SemanticID SEMTREX_VALUE_LITERAL_DEF;
SemanticID ONE_OR_MORE_OF_ASCII_CHAR;
SemanticID ASPECT;
SemanticID ONE_OR_MORE_OF_STRUCTURE_OF_ASPECT;
SemanticID TUPLE_OF_ASPECT_TYPE_AND_ASPECT_LABEL;
SemanticID ONE_OR_MORE_OF_ASPECT_DEF;
SemanticID ONE_OR_MORE_OF_RECEPTOR_PATH;
SemanticID RECEPTOR_ADDRESS;
SemanticID LIST_OF_FROM_ADDRESS_AND_TO_ADDRESS_AND_ASPECT_IDENT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID;
SemanticID TUPLE_OF_ENVELOPE_AND_BODY;
SemanticID ZERO_OR_MORE_OF_SIGNAL;
SemanticID TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH;
SemanticID LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS;
SemanticID ZERO_OR_MORE_OF_PENDING_RESPONSE;
SemanticID LIST_OF_CARRIER_AND_PATTERN_AND_ACTION_AND_PARAMS_AND_END_CONDITIONS_AND_ZERO_OR_ONE_OF_SEMANTIC_MAP;
SemanticID ZERO_OR_MORE_OF_EXPECTATION;
SemanticID LOGICAL_OR_OF_PROCESS_OF_STRUCTURE_AND_PROCESS_OF_SYMBOL_AND_PROCESS_OF_PROCESS;
SemanticID LOGICAL_OR_OF_TRANSCODER_AND_OPERATOR_AND_VALIDATOR;
SemanticID TUPLE_OF_PROCESS_OF_AND_PROCESS_TYPE;
SemanticID ANY_SYMBOL;
SemanticID LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_CODE_AND_PROCESS_SIGNATURE_AND_ZERO_OR_ONE_OF_PROCESS_LINK;
SemanticID ZERO_OR_MORE_OF_PROCESS_DEFINITION;
SemanticID SEMANTIC_REFERENCE;
SemanticID SLOT_STRUCTURE;
SemanticID TUPLE_OF_SEMANTIC_REFERENCE_AND_REPLACEMENT_VALUE;
SemanticID LIST_OF_ONE_OR_MORE_OF_SEMANTIC_LINK;
SemanticID LOGICAL_OR_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU;
SemanticID SIGNATURE_SEMANTIC_VARIANTS;
SemanticID TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL;
SemanticID TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE;
SemanticID TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE;
SemanticID LIST_OF_ZERO_OR_MORE_OF_EXPECTED_SLOT;
SemanticID PROCESS_FORM;
SemanticID LIST_OF_CODE_AND_PARAMS_AND_ZERO_OR_ONE_OF_CODE;
SemanticID ZERO_OR_MORE_OF_ANY_SYMBOL;
SemanticID ONE_OR_MORE_OF_ROLE;
SemanticID LIST_OF_ROLE_AND_SOURCE_AND_PATTERN_AND_ACTION_AND_ZERO_OR_ONE_OF_PARAMS;
SemanticID LIST_OF_ROLE_AND_DESTINATION_AND_ACTION;
SemanticID TUPLE_OF_PNAME_AND_ONE_OR_MORE_OF_LOGICAL_OR_OF_RESOLUTION_AND_CONNECTION;
SemanticID INTERACTION;
SemanticID ZERO_OR_MORE_OF_PROTOCOL_DEFINITION;
SemanticID TUPLE_OF_GOAL_AND_ACTUAL_PROCESS;
SemanticID TUPLE_OF_ROLE_AND_ACTUAL_RECEPTOR;
SemanticID TUPLE_OF_USAGE_AND_ACTUAL_SYMBOL;
SemanticID TUPLE_OF_WEAL_AND_ACTUAL_PROTOCOL;
SemanticID TUPLE_OF_ACTUAL_SYMBOL_AND_ACTUAL_VALUE;
SemanticID MAPPING;
SemanticID PAIR_OF_GOAL;
SemanticID PAIR_OF_ROLE;
SemanticID PAIR_OF_USAGE;
SemanticID PAIR_OF_WEAL;
SemanticID LINKING;
SemanticID ONE_OR_MORE_OF_RESOLUTION;
SemanticID LIST_OF_ZERO_OR_MORE_OF_ROLE_AND_ZERO_OR_MORE_OF_GOAL_AND_ZERO_OR_MORE_OF_USAGE_AND_ZERO_OR_MORE_OF_WEAL;
SemanticID LIST_OF_PROTOCOL_LABEL_AND_PROTOCOL_SEMANTICS_AND_ZERO_OR_MORE_OF_STRUCTURE_OF_INTERACTION_AND_ZERO_OR_MORE_OF_INCLUSION;
SemanticID ZERO_OR_MORE_OF_STRUCTURE_OF_SCAPE;
SemanticID TUPLE_OF_MANIFEST_LABEL_AND_MANIFEST_SPEC;
SemanticID ONE_OR_MORE_OF_MANIFEST_PAIR;
SemanticID LIST_OF_MANIFEST_AND_RECEPTOR_IDENTIFIER_AND_DEFINITIONS;
SemanticID TUPLE_OF_MANIFEST_LABEL_AND_ANY_SYMBOL;
SemanticID ONE_OR_MORE_OF_BINDING_PAIR;
SemanticID RECEPTOR_IDENTITY;
SemanticID TUPLE_OF_RECEPTOR_LABEL_AND_DEFINITIONS;
SemanticID ZERO_OR_MORE_OF_RECEPTOR_DEFINITION;
SemanticID LIST_OF_FLUX_AND_PENDING_SIGNALS_AND_PENDING_RESPONSES_AND_RECEPTOR_ELAPSED_TIME;
SemanticID LIST_OF_INSTANCE_OF_AND_CONTEXT_NUM_AND_PARENT_CONTEXT_NUM_AND_RECEPTOR_STATE;
SemanticID ZERO_OR_MORE_OF_RECEPTOR_XADDR;
SemanticID LIST_OF_ACTIVE_RECEPTORS;
SemanticID DATE;
SemanticID TIME;
SemanticID TIMESTAMP;
SemanticID REDUCTION_ERROR;
SemanticID LOGICAL_OR_OF_COUNT_AND_UNLIMITED;
SemanticID TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS;
SemanticID STX_TOKEN_LIST;
SemanticID TREE_DELTA;

/**********************************************************************************/
// SYS:Process
enum SYSProcessIDs {
    NULL_PROCESS_ID,
    NOOP_ID,
    NEW_ID,
    GET_ID,
    DEL_ID,
    DO_ID,
    TRANSCODE_ID,
    DISSOLVE_ID,
    IF_ID,
    ITERATE_ID,
    SAY_ID,
    REQUEST_ID,
    SELF_ADDR_ID,
    LISTEN_ID,
    MATCH_ID,
    RESPOND_ID,
    QUOTE_ID,
    FILL_ID,
    FILL_FROM_MATCH_ID,
    RAISE_ID,
    STREAM_READ_ID,
    STREAM_WRITE_ID,
    STREAM_ALIVE_ID,
    CONCAT_STR_ID,
    EXPAND_STR_ID,
    CONTRACT_STR_ID,
    EQ_SYM_ID,
    ADD_INT_ID,
    SUB_INT_ID,
    MULT_INT_ID,
    DIV_INT_ID,
    MOD_INT_ID,
    EQ_INT_ID,
    LT_INT_ID,
    GT_INT_ID,
    LTE_INT_ID,
    GTE_INT_ID,
    INITIATE_PROTOCOL_ID,
    MAGIC_ID,
    NUM_SYS_PROCESSES
};
SemanticID NOOP;
SemanticID NEW;
SemanticID GET;
SemanticID DEL;
SemanticID DO;
SemanticID TRANSCODE;
SemanticID DISSOLVE;
SemanticID IF;
SemanticID ITERATE;
SemanticID SAY;
SemanticID REQUEST;
SemanticID SELF_ADDR;
SemanticID LISTEN;
SemanticID MATCH;
SemanticID RESPOND;
SemanticID QUOTE;
SemanticID FILL;
SemanticID FILL_FROM_MATCH;
SemanticID RAISE;
SemanticID STREAM_READ;
SemanticID STREAM_WRITE;
SemanticID STREAM_ALIVE;
SemanticID CONCAT_STR;
SemanticID EXPAND_STR;
SemanticID CONTRACT_STR;
SemanticID EQ_SYM;
SemanticID ADD_INT;
SemanticID SUB_INT;
SemanticID MULT_INT;
SemanticID DIV_INT;
SemanticID MOD_INT;
SemanticID EQ_INT;
SemanticID LT_INT;
SemanticID GT_INT;
SemanticID LTE_INT;
SemanticID GTE_INT;
SemanticID INITIATE_PROTOCOL;
SemanticID MAGIC;

/**********************************************************************************/
// SYS:Protocol
enum SYSProtocolIDs {
    NULL_PROTOCOL_ID,
    NUM_SYS_PROTOCOLS
};

/**********************************************************************************/
// COMPOSITORY:Symbol
enum COMPOSITORYSymbolIDs {
    NULL_COMPOSITORY_SYMBOL_ID,
    NUM_COMPOSITORY_SYMBOLS
};

/**********************************************************************************/
// COMPOSITORY:Structure
enum COMPOSITORYStructureIDs {
    NULL_COMPOSITORY_STRUCTURE_ID,
    NUM_COMPOSITORY_STRUCTURES
};

/**********************************************************************************/
// COMPOSITORY:Process
enum COMPOSITORYProcessIDs {
    NULL_COMPOSITORY_PROCESS_ID,
    NUM_COMPOSITORY_PROCESSES
};

/**********************************************************************************/
// COMPOSITORY:Protocol
enum COMPOSITORYProtocolIDs {
    NULL_COMPOSITORY_PROTOCOL_ID,
    NUM_COMPOSITORY_PROTOCOLS
};

/**********************************************************************************/
// DEV_COMPOSITORY:Symbol
enum DEV_COMPOSITORYSymbolIDs {
    NULL_DEV_COMPOSITORY_SYMBOL_ID,
    REQUESTER_ID,
    RESPONDER_ID,
    REQUEST_DATA_ID,
    RESPONSE_DATA_ID,
    CHANNEL_ID,
    RESPONSE_HANDLER_ID,
    REQUEST_HANDLER_ID,
    backnforth_ID,
    RECOGNIZER_ID,
    RECOGNIZEE_ID,
    RECOGNITION_ID,
    are_you_ID,
    i_am_ID,
    LINE_ID,
    LINES_ID,
    VERB_ID,
    COMMAND_PARAMETER_ID,
    SHELL_COMMAND_ID,
    LINE_SENDER_ID,
    COMMAND_RECEIVER_ID,
    parse_line_ID,
    COMMAND_TYPE_ID,
    SERVER_ID,
    CLIENT_ID,
    PING_ID,
    YUP_ID,
    HANDLER_ID,
    alive_ID,
    GROUP_ID,
    MEMBER_ID,
    enrollment_ID,
    converse_ID,
    MESSAGE_ID,
    NUM_DEV_COMPOSITORY_SYMBOLS
};
SemanticID REQUESTER;
SemanticID RESPONDER;
SemanticID REQUEST_DATA;
SemanticID RESPONSE_DATA;
SemanticID CHANNEL;
SemanticID RESPONSE_HANDLER;
SemanticID REQUEST_HANDLER;
SemanticID backnforth;
SemanticID RECOGNIZER;
SemanticID RECOGNIZEE;
SemanticID RECOGNITION;
SemanticID are_you;
SemanticID i_am;
SemanticID LINE;
SemanticID LINES;
SemanticID VERB;
SemanticID COMMAND_PARAMETER;
SemanticID SHELL_COMMAND;
SemanticID LINE_SENDER;
SemanticID COMMAND_RECEIVER;
SemanticID parse_line;
SemanticID COMMAND_TYPE;
SemanticID SERVER;
SemanticID CLIENT;
SemanticID PING;
SemanticID YUP;
SemanticID HANDLER;
SemanticID alive;
SemanticID GROUP;
SemanticID MEMBER;
SemanticID enrollment;
SemanticID converse;
SemanticID MESSAGE;

/**********************************************************************************/
// DEV_COMPOSITORY:Structure
enum DEV_COMPOSITORYStructureIDs {
    NULL_DEV_COMPOSITORY_STRUCTURE_ID,
    ZERO_OR_MORE_OF_LINE_ID,
    COMMAND_ID,
    NUM_DEV_COMPOSITORY_STRUCTURES
};
SemanticID ZERO_OR_MORE_OF_LINE;
SemanticID COMMAND;

/**********************************************************************************/
// DEV_COMPOSITORY:Process
enum DEV_COMPOSITORYProcessIDs {
    NULL_DEV_COMPOSITORY_PROCESS_ID,
    date2usshortdate_ID,
    send_request_ID,
    send_response_ID,
    fill_i_am_ID,
    line_2_command_ID,
    respond_with_yup_ID,
    request_membership_ID,
    enroll_ID,
    speak_ID,
    group_listen_ID,
    NUM_DEV_COMPOSITORY_PROCESSES
};
SemanticID date2usshortdate;
SemanticID send_request;
SemanticID send_response;
SemanticID fill_i_am;
SemanticID line_2_command;
SemanticID respond_with_yup;
SemanticID request_membership;
SemanticID enroll;
SemanticID speak;
SemanticID group_listen;

/**********************************************************************************/
// DEV_COMPOSITORY:Protocol
enum DEV_COMPOSITORYProtocolIDs {
    NULL_DEV_COMPOSITORY_PROTOCOL_ID,
    REQUESTING_ID,
    RECOGNIZE_ID,
    PARSE_COMMAND_FROM_LINE_ID,
    COMMAND_SHELL_ID,
    ALIVE_ID,
    group1_ID,
    NUM_DEV_COMPOSITORY_PROTOCOLS
};
SemanticID REQUESTING;
SemanticID RECOGNIZE;
SemanticID PARSE_COMMAND_FROM_LINE;
SemanticID COMMAND_SHELL;
SemanticID ALIVE;
SemanticID group1;

/**********************************************************************************/
// TEST:Symbol
enum TESTSymbolIDs {
    NULL_TEST_SYMBOL_ID,
    TEST_INT_SYMBOL_ID,
    TEST_INT_SYMBOL2_ID,
    TEST_FLOAT_SYMBOL_ID,
    TEST_STR_SYMBOL_ID,
    TEST_TREE_SYMBOL_ID,
    TEST_ANYTHING_SYMBOL_ID,
    TEST_ANYTHING_SYMBOL2_ID,
    TEST_STREAM_SYMBOL_ID,
    TEST_NAME_SYMBOL_ID,
    TEST_ALPHABETIZE_SCAPE_SYMBOL_ID,
    TEST_SYMBOL_SYMBOL_ID,
    TESTING_ID,
    TEST_CHAR_SYMBOL_ID,
    NUM_TEST_SYMBOLS
};
SemanticID TEST_INT_SYMBOL;
SemanticID TEST_INT_SYMBOL2;
SemanticID TEST_FLOAT_SYMBOL;
SemanticID TEST_STR_SYMBOL;
SemanticID TEST_TREE_SYMBOL;
SemanticID TEST_ANYTHING_SYMBOL;
SemanticID TEST_ANYTHING_SYMBOL2;
SemanticID TEST_STREAM_SYMBOL;
SemanticID TEST_NAME_SYMBOL;
SemanticID TEST_ALPHABETIZE_SCAPE_SYMBOL;
SemanticID TEST_SYMBOL_SYMBOL;
SemanticID TESTING;
SemanticID TEST_CHAR_SYMBOL;

/**********************************************************************************/
// TEST:Structure
enum TESTStructureIDs {
    NULL_TEST_STRUCTURE_ID,
    NUM_TEST_STRUCTURES
};

/**********************************************************************************/
// TEST:Process
enum TESTProcessIDs {
    NULL_TEST_PROCESS_ID,
    NUM_TEST_PROCESSES
};

/**********************************************************************************/
// TEST:Protocol
enum TESTProtocolIDs {
    NULL_TEST_PROTOCOL_ID,
    NUM_TEST_PROTOCOLS
};

/**********************************************************************************/
// CLOCK:Symbol
enum CLOCKSymbolIDs {
    NULL_CLOCK_SYMBOL_ID,
    TIME_TELLER_ID,
    TIME_HEARER_ID,
    CLOCK_TELL_TIME_ID,
    tell_time_ID,
    NUM_CLOCK_SYMBOLS
};
SemanticID TIME_TELLER;
SemanticID TIME_HEARER;
SemanticID CLOCK_TELL_TIME;
SemanticID tell_time;

/**********************************************************************************/
// CLOCK:Structure
enum CLOCKStructureIDs {
    NULL_CLOCK_STRUCTURE_ID,
    NUM_CLOCK_STRUCTURES
};

/**********************************************************************************/
// CLOCK:Process
enum CLOCKProcessIDs {
    NULL_CLOCK_PROCESS_ID,
    time_request_ID,
    NUM_CLOCK_PROCESSES
};
SemanticID time_request;

/**********************************************************************************/
// CLOCK:Protocol
enum CLOCKProtocolIDs {
    NULL_CLOCK_PROTOCOL_ID,
    NUM_CLOCK_PROTOCOLS
};

/**********************************************************************************/
// STREAM_EDGE:Symbol
enum STREAM_EDGESymbolIDs {
    NULL_STREAM_EDGE_SYMBOL_ID,
    NUM_STREAM_EDGE_SYMBOLS
};

/**********************************************************************************/
// STREAM_EDGE:Structure
enum STREAM_EDGEStructureIDs {
    NULL_STREAM_EDGE_STRUCTURE_ID,
    NUM_STREAM_EDGE_STRUCTURES
};

/**********************************************************************************/
// STREAM_EDGE:Process
enum STREAM_EDGEProcessIDs {
    NULL_STREAM_EDGE_PROCESS_ID,
    echo2stream_ID,
    NUM_STREAM_EDGE_PROCESSES
};
SemanticID echo2stream;

/**********************************************************************************/
// STREAM_EDGE:Protocol
enum STREAM_EDGEProtocolIDs {
    NULL_STREAM_EDGE_PROTOCOL_ID,
    NUM_STREAM_EDGE_PROTOCOLS
};

/**********************************************************************************/
// INTERNET:Symbol
enum INTERNETSymbolIDs {
    NULL_INTERNET_SYMBOL_ID,
    OCTET_STREAM_ID,
    PARAM_KEY_ID,
    PARAM_VALUE_ID,
    VERSION_MAJOR_ID,
    VERSION_MINOR_ID,
    STATUS_VALUE_ID,
    STATUS_TEXT_ID,
    HTTP_REQUEST_PATH_SEGMENT_ID,
    HTTP_REQUEST_PATH_SEGMENTS_ID,
    FILE_NAME_ID,
    FILE_EXTENSION_ID,
    HTTP_REQUEST_PATH_FILE_ID,
    HTTP_REQUEST_PATH_QUERY_PARAM_ID,
    HTTP_REQUEST_PATH_QUERY_PARAMS_ID,
    HTTP_REQUEST_PATH_QUERY_ID,
    MEDIA_TYPE_IDENT_ID,
    MEDIA_SUBTYPE_IDENT_ID,
    MEDIA_PARAM_ID,
    CONTENT_TYPE_ID,
    TEXT_MEDIA_TYPE_ID,
    HTML_TEXT_MEDIA_SUBTYPE_ID,
    PLAIN_TEXT_MEDIA_SUBTYPE_ID,
    CEPTR_TEXT_MEDIA_SUBTYPE_ID,
    CONTENT_ENCODING_ID,
    HTTP_REQUEST_METHOD_ID,
    HTTP_REQUEST_PATH_ID,
    HTTP_REQUEST_VERSION_ID,
    HTTP_REQUEST_ID,
    HTTP_REQUEST_HOST_ID,
    HEADER_KEY_ID,
    HEADER_VALUE_ID,
    HTTP_RESPONSE_HEADER_ID,
    HTTP_GENERAL_HEADER_ID,
    HTTP_ENTITY_HEADER_ID,
    HTTP_RESPONSE_BODY_ID,
    HTTP_RESPONSE_STATUS_ID,
    HTTP_HEADERS_ID,
    HTTP_RESPONSE_ID,
    HTML_DOCUMENT_ID,
    HTML_TOK_TAG_OPEN_ID,
    HTML_TOK_TAG_CLOSE_ID,
    HTML_TOK_TAG_SELFCLOSE_ID,
    HTML_TAG_ID,
    HTML_TOKENS_ID,
    HTML_ATTRIBUTE_ID,
    HTML_ATTRIBUTES_ID,
    HTML_CONTENT_ID,
    HTML_TEXT_ID,
    HTML_HTML_ID,
    HTML_HEAD_ID,
    HTML_TITLE_ID,
    HTML_BODY_ID,
    HTML_DIV_ID,
    HTML_P_ID,
    HTML_IMG_ID,
    HTML_A_ID,
    HTML_B_ID,
    HTML_UL_ID,
    HTML_OL_ID,
    HTML_LI_ID,
    HTML_SPAN_ID,
    HTML_H1_ID,
    HTML_H2_ID,
    HTML_H3_ID,
    HTML_H4_ID,
    HTML_FORM_ID,
    HTML_INPUT_ID,
    HTML_BUTTON_ID,
    HTTP_CLIENT_ID,
    HTTP_SERVER_ID,
    HTTP_REQUEST_PARSER_ID,
    HTTP_ASPECT_ID,
    HTTP_RESPONSE_HANDLER_ID,
    NUM_INTERNET_SYMBOLS
};
SemanticID OCTET_STREAM;
SemanticID PARAM_KEY;
SemanticID PARAM_VALUE;
SemanticID VERSION_MAJOR;
SemanticID VERSION_MINOR;
SemanticID STATUS_VALUE;
SemanticID STATUS_TEXT;
SemanticID HTTP_REQUEST_PATH_SEGMENT;
SemanticID HTTP_REQUEST_PATH_SEGMENTS;
SemanticID FILE_NAME;
SemanticID FILE_EXTENSION;
SemanticID HTTP_REQUEST_PATH_FILE;
SemanticID HTTP_REQUEST_PATH_QUERY_PARAM;
SemanticID HTTP_REQUEST_PATH_QUERY_PARAMS;
SemanticID HTTP_REQUEST_PATH_QUERY;
SemanticID MEDIA_TYPE_IDENT;
SemanticID MEDIA_SUBTYPE_IDENT;
SemanticID MEDIA_PARAM;
SemanticID CONTENT_TYPE;
SemanticID TEXT_MEDIA_TYPE;
SemanticID HTML_TEXT_MEDIA_SUBTYPE;
SemanticID PLAIN_TEXT_MEDIA_SUBTYPE;
SemanticID CEPTR_TEXT_MEDIA_SUBTYPE;
SemanticID CONTENT_ENCODING;
SemanticID HTTP_REQUEST_METHOD;
SemanticID HTTP_REQUEST_PATH;
SemanticID HTTP_REQUEST_VERSION;
SemanticID HTTP_REQUEST;
SemanticID HTTP_REQUEST_HOST;
SemanticID HEADER_KEY;
SemanticID HEADER_VALUE;
SemanticID HTTP_RESPONSE_HEADER;
SemanticID HTTP_GENERAL_HEADER;
SemanticID HTTP_ENTITY_HEADER;
SemanticID HTTP_RESPONSE_BODY;
SemanticID HTTP_RESPONSE_STATUS;
SemanticID HTTP_HEADERS;
SemanticID HTTP_RESPONSE;
SemanticID HTML_DOCUMENT;
SemanticID HTML_TOK_TAG_OPEN;
SemanticID HTML_TOK_TAG_CLOSE;
SemanticID HTML_TOK_TAG_SELFCLOSE;
SemanticID HTML_TAG;
SemanticID HTML_TOKENS;
SemanticID HTML_ATTRIBUTE;
SemanticID HTML_ATTRIBUTES;
SemanticID HTML_CONTENT;
SemanticID HTML_TEXT;
SemanticID HTML_HTML;
SemanticID HTML_HEAD;
SemanticID HTML_TITLE;
SemanticID HTML_BODY;
SemanticID HTML_DIV;
SemanticID HTML_P;
SemanticID HTML_IMG;
SemanticID HTML_A;
SemanticID HTML_B;
SemanticID HTML_UL;
SemanticID HTML_OL;
SemanticID HTML_LI;
SemanticID HTML_SPAN;
SemanticID HTML_H1;
SemanticID HTML_H2;
SemanticID HTML_H3;
SemanticID HTML_H4;
SemanticID HTML_FORM;
SemanticID HTML_INPUT;
SemanticID HTML_BUTTON;
SemanticID HTTP_CLIENT;
SemanticID HTTP_SERVER;
SemanticID HTTP_REQUEST_PARSER;
SemanticID HTTP_ASPECT;
SemanticID HTTP_RESPONSE_HANDLER;

/**********************************************************************************/
// INTERNET:Structure
enum INTERNETStructureIDs {
    NULL_INTERNET_STRUCTURE_ID,
    KEY_VALUE_PARAM_ID,
    VERSION_ID,
    STATUS_ID,
    ZERO_OR_MORE_OF_HTTP_REQUEST_PATH_SEGMENT_ID,
    FILE_HANDLE_ID,
    ZERO_OR_MORE_OF_HTTP_REQUEST_PATH_QUERY_PARAM_ID,
    ZERO_OR_MORE_OF_HTTP_REQUEST_PATH_QUERY_PARAMS_ID,
    URI_ID,
    MEDIA_TYPE_ID,
    HTTP_REQUEST_V09_ID,
    HEADER_ID,
    LOGICAL_OR_OF_CONTENT_TYPE_AND_CONTENT_ENCODING_ID,
    ZERO_OR_MORE_OF_LOGICAL_OR_OF_HTTP_GENERAL_HEADER_AND_HTTP_RESPONSE_HEADER_AND_HTTP_ENTITY_HEADER_ID,
    LIST_OF_HTTP_RESPONSE_STATUS_AND_HTTP_HEADERS_AND_HTTP_RESPONSE_BODY_ID,
    ZERO_OR_MORE_OF_HTML_ATTRIBUTE_ID,
    HTML_ELEMENT_ID,
    NUM_INTERNET_STRUCTURES
};
SemanticID KEY_VALUE_PARAM;
SemanticID VERSION;
SemanticID STATUS;
SemanticID ZERO_OR_MORE_OF_HTTP_REQUEST_PATH_SEGMENT;
SemanticID FILE_HANDLE;
SemanticID ZERO_OR_MORE_OF_HTTP_REQUEST_PATH_QUERY_PARAM;
SemanticID ZERO_OR_MORE_OF_HTTP_REQUEST_PATH_QUERY_PARAMS;
SemanticID URI;
SemanticID MEDIA_TYPE;
SemanticID HTTP_REQUEST_V09;
SemanticID HEADER;
SemanticID LOGICAL_OR_OF_CONTENT_TYPE_AND_CONTENT_ENCODING;
SemanticID ZERO_OR_MORE_OF_LOGICAL_OR_OF_HTTP_GENERAL_HEADER_AND_HTTP_RESPONSE_HEADER_AND_HTTP_ENTITY_HEADER;
SemanticID LIST_OF_HTTP_RESPONSE_STATUS_AND_HTTP_HEADERS_AND_HTTP_RESPONSE_BODY;
SemanticID ZERO_OR_MORE_OF_HTML_ATTRIBUTE;
SemanticID HTML_ELEMENT;

/**********************************************************************************/
// INTERNET:Process
enum INTERNETProcessIDs {
    NULL_INTERNET_PROCESS_ID,
    content_type_2_line_ID,
    line_2_httpreq_ID,
    httpresp_ID,
    NUM_INTERNET_PROCESSES
};
SemanticID content_type_2_line;
SemanticID line_2_httpreq;
SemanticID httpresp;

/**********************************************************************************/
// INTERNET:Protocol
enum INTERNETProtocolIDs {
    NULL_INTERNET_PROTOCOL_ID,
    PARSE_HTTP_REQUEST_FROM_LINE_ID,
    HTTP_ID,
    NUM_INTERNET_PROTOCOLS
};
SemanticID PARSE_HTTP_REQUEST_FROM_LINE;
SemanticID HTTP;

//Global data from base_defs
T * G_http_req_example;

#endif
