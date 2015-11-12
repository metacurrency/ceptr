/**
 * @ingroup def
 *
 * @file base_defs.c
 * @brief auto-generated system definitions
 *
 * NOTE: this file is auto-generated by base_defs.pl
 *
 * @copyright Copyright (C) 2013-2015, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 */

#include "base_defs.h"
#include "sys_defs.h"
#include "def.h"
#include "process.h"

void base_defs() {
  sT(SYS_CONTEXT,BIT,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,INTEGER,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,FLOAT,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,CHAR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,CSTRING,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SYMBOL,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,ENUM,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,TREE_PATH,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,XADDR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,LIST,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SURFACE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,TREE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,RECEPTOR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,PROCESS,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,STRUCTURE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SCAPE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SEMTREX,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,STREAM,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,UUID,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,BLOB,1,NULL_SYMBOL);
  sY(SYS_CONTEXT,STRUCTURES,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SYMBOLS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,PROCESSES,NULL_STRUCTURE);
  sY(SYS_CONTEXT,PROTOCOOLS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SCAPES,NULL_STRUCTURE);
  sY(SYS_CONTEXT,ASPECTS,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_ZERO_OR_MORE_OF_PROTOCOOLS_AND_ZERO_OR_MORE_OF_SCAPES_AND_ZERO_OR_MORE_OF_ASPECTS,sT_STAR(sT_SEQ(6,sT_SYM(STRUCTURES),sT_SYM(SYMBOLS),sT_SYM(PROCESSES),sT_STAR(sT_SYM(PROTOCOOLS)),sT_STAR(sT_SYM(SCAPES)),sT_STAR(sT_SYM(ASPECTS)))));
  sY(SYS_CONTEXT,DEFINITIONS,ZERO_OR_MORE_OF_LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_ZERO_OR_MORE_OF_PROTOCOOLS_AND_ZERO_OR_MORE_OF_SCAPES_AND_ZERO_OR_MORE_OF_ASPECTS);
  sY(SYS_CONTEXT,STRUCTURE_SYMBOL,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_SEQUENCE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_SYMBOL_SET,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_OR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_ZERO_OR_MORE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_ONE_OR_MORE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_ZERO_OR_ONE,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,STRUCTURE_DEF,sT_SET(7,sT_SYM(STRUCTURE_SYMBOL),sT_SYM(STRUCTURE_SEQUENCE),sT_SYM(STRUCTURE_SYMBOL_SET),sT_SYM(STRUCTURE_OR),sT_SYM(STRUCTURE_ZERO_OR_MORE),sT_SYM(STRUCTURE_ONE_OR_MORE),sT_SYM(STRUCTURE_ZERO_OR_ONE)));
  sY(SYS_CONTEXT,STRUCTURE_LABEL,CSTRING);
  sTs(SYS_CONTEXT,TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF,sT_SEQ(2,sT_SYM(STRUCTURE_LABEL),sT_SYM(STRUCTURE_DEF)));
  sY(SYS_CONTEXT,STRUCTURE_DEFINITION,TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_STRUCTURE_DEFINITION,sT_STAR(sT_SYM(STRUCTURE_DEFINITION)));
  sYs(SYS_CONTEXT,STRUCTURES,ZERO_OR_MORE_OF_STRUCTURE_DEFINITION);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_STRUCTURE_DEF,sT_PLUS(sT_SYM(STRUCTURE_DEF)));
  sYs(SYS_CONTEXT,STRUCTURE_SEQUENCE,ONE_OR_MORE_OF_STRUCTURE_DEF);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_STRUCTURE_SYMBOL,sT_PLUS(sT_SYM(STRUCTURE_SYMBOL)));
  sYs(SYS_CONTEXT,STRUCTURE_SYMBOL_SET,ONE_OR_MORE_OF_STRUCTURE_SYMBOL);
  sYs(SYS_CONTEXT,STRUCTURE_SYMBOL,SYMBOL);
  sTs(SYS_CONTEXT,PAIR_OF_STRUCTURE_DEF,sT_SEQ(2,sT_SYM(STRUCTURE_DEF),sT_SYM(STRUCTURE_DEF)));
  sYs(SYS_CONTEXT,STRUCTURE_OR,PAIR_OF_STRUCTURE_DEF);
  sYs(SYS_CONTEXT,STRUCTURE_ZERO_OR_MORE,STRUCTURE_DEF);
  sYs(SYS_CONTEXT,STRUCTURE_ONE_OR_MORE,STRUCTURE_DEF);
  sYs(SYS_CONTEXT,STRUCTURE_ZERO_OR_ONE,STRUCTURE_DEF);
  sY(SYS_CONTEXT,SYMBOL_STRUCTURE,STRUCTURE);
  sY(SYS_CONTEXT,SYMBOL_LABEL,CSTRING);
  sTs(SYS_CONTEXT,TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE,sT_SEQ(2,sT_SYM(SYMBOL_LABEL),sT_SYM(SYMBOL_STRUCTURE)));
  sY(SYS_CONTEXT,SYMBOL_DECLARATION,TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_SYMBOL_DECLARATION,sT_STAR(sT_SYM(SYMBOL_DECLARATION)));
  sYs(SYS_CONTEXT,SYMBOLS,ZERO_OR_MORE_OF_SYMBOL_DECLARATION);
  sY(SYS_CONTEXT,BOOLEAN,BIT);
  sY(SYS_CONTEXT,SEMTREX_MATCH_PATH,TREE_PATH);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL,SYMBOL);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_SEMTREX_SYMBOL,sT_PLUS(sT_SYM(SEMTREX_SYMBOL)));
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_SET,ONE_OR_MORE_OF_SEMTREX_SYMBOL);
  sTs(SYS_CONTEXT,STX_SYMBOL_OR_SYMBOL_SET,sT_OR(sT_SYM(SEMTREX_SYMBOL),sT_SYM(SEMTREX_SYMBOL_SET)));
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL,STX_SYMBOL_OR_SYMBOL_SET);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL_NOT,STX_SYMBOL_OR_SYMBOL_SET);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_SEMTREX,sT_PLUS(sT_SYM(SEMTREX)));
  sY(SYS_CONTEXT,SEMTREX_SEQUENCE,ONE_OR_MORE_OF_SEMTREX);
  sTs(SYS_CONTEXT,PAIR_OF_SEMTREX,sT_SEQ(2,sT_SYM(SEMTREX),sT_SYM(SEMTREX)));
  sY(SYS_CONTEXT,SEMTREX_OR,PAIR_OF_SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_NOT,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_ANY,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_ZERO_OR_MORE,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_ONE_OR_MORE,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_ZERO_OR_ONE,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_VALUE_LITERAL,TREE);
  sY(SYS_CONTEXT,SEMTREX_VALUE_LITERAL_NOT,TREE);
  sY(SYS_CONTEXT,SEMTREX_VALUE_SET,LIST);
  sY(SYS_CONTEXT,SEMTREX_GROUP,SYMBOL);
  sY(SYS_CONTEXT,SEMTREX_DESCEND,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_WALK,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_MATCH,INTEGER);
  sY(SYS_CONTEXT,SEMTREX_MATCH_CURSOR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_MATCH_RESULTS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_MATCH_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,SEMTREX_MATCH_SIBLINGS_COUNT,INTEGER);
  sY(SYS_CONTEXT,ASCII_CHAR,CHAR);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_ASCII_CHAR,sT_PLUS(sT_SYM(ASCII_CHAR)));
  sY(SYS_CONTEXT,ASCII_CHARS,ONE_OR_MORE_OF_ASCII_CHAR);
  sY(SYS_CONTEXT,RECEPTOR_XADDR,XADDR);
  sY(SYS_CONTEXT,ASPECT,INTEGER);
  sY(SYS_CONTEXT,FLUX,LIST);
  sY(SYS_CONTEXT,SCAPE_SPEC,TREE);
  sYs(SYS_CONTEXT,ASPECTS,LIST);
  sY(SYS_CONTEXT,ASPECT_DEF,TREE);
  sY(SYS_CONTEXT,ASPECT_TYPE,BIT);
  sY(SYS_CONTEXT,CARRIER,SYMBOL);
  sY(SYS_CONTEXT,BODY,TREE);
  sY(SYS_CONTEXT,SIGNAL_UUID,UUID);
  sY(SYS_CONTEXT,RECEPTOR_ADDRESS,INTEGER);
  sTs(SYS_CONTEXT,LIST_OF_RECEPTOR_ADDRESS_AND_RECEPTOR_ADDRESS_AND_ASPECT_AND_CARRIER_AND_SIGNAL_UUID,sT_SEQ(5,sT_SYM(RECEPTOR_ADDRESS),sT_SYM(RECEPTOR_ADDRESS),sT_SYM(ASPECT),sT_SYM(CARRIER),sT_SYM(SIGNAL_UUID)));
  sY(SYS_CONTEXT,ENVELOPE,LIST_OF_RECEPTOR_ADDRESS_AND_RECEPTOR_ADDRESS_AND_ASPECT_AND_CARRIER_AND_SIGNAL_UUID);
  sTs(SYS_CONTEXT,TUPLE_OF_ENVELOPE_AND_BODY,sT_SEQ(2,sT_SYM(ENVELOPE),sT_SYM(BODY)));
  sY(SYS_CONTEXT,SIGNAL,TUPLE_OF_ENVELOPE_AND_BODY);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_SIGNAL,sT_STAR(sT_SYM(SIGNAL)));
  sY(SYS_CONTEXT,SIGNALS,ZERO_OR_MORE_OF_SIGNAL);
  sY(SYS_CONTEXT,PENDING_SIGNALS,ZERO_OR_MORE_OF_SIGNAL);
  sY(SYS_CONTEXT,RESPONSE_CODE_PATH,TREE_PATH);
  sY(SYS_CONTEXT,PROCESS_IDENT,INTEGER);
  sTs(SYS_CONTEXT,LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_PROCESS_IDENT_AND_RESPONSE_CODE_PATH,sT_SEQ(4,sT_SYM(SIGNAL_UUID),sT_SYM(CARRIER),sT_SYM(PROCESS_IDENT),sT_SYM(RESPONSE_CODE_PATH)));
  sY(SYS_CONTEXT,PENDING_RESPONSE,LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_PROCESS_IDENT_AND_RESPONSE_CODE_PATH);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_PENDING_RESPONSE,sT_STAR(sT_SYM(PENDING_RESPONSE)));
  sY(SYS_CONTEXT,PENDING_RESPONSES,ZERO_OR_MORE_OF_PENDING_RESPONSE);
  sY(SYS_CONTEXT,RESPONSE_CARRIER,SYMBOL);
  sY(SYS_CONTEXT,LISTENER,SYMBOL);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_LISTENER,sT_STAR(sT_SYM(LISTENER)));
  sY(SYS_CONTEXT,LISTENERS,ZERO_OR_MORE_OF_LISTENER);
  sY(SYS_CONTEXT,EXPECTATION,SEMTREX);
  sY(SYS_CONTEXT,ACTION,PROCESS);
  sY(SYS_CONTEXT,INTERPOLATE_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,PROCESS_NAME,CSTRING);
  sY(SYS_CONTEXT,PROCESS_INTENTION,CSTRING);
  sY(SYS_CONTEXT,PROCESS_SIGNATURE,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_PROCESS_AND_PROCESS_SIGNATURE,sT_SEQ(4,sT_SYM(PROCESS_NAME),sT_SYM(PROCESS_INTENTION),sT_SYM(PROCESS),sT_SYM(PROCESS_SIGNATURE)));
  sY(SYS_CONTEXT,PROCESS_CODING,LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_PROCESS_AND_PROCESS_SIGNATURE);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_PROCESS_CODING,sT_STAR(sT_SYM(PROCESS_CODING)));
  sYs(SYS_CONTEXT,PROCESSES,ZERO_OR_MORE_OF_PROCESS_CODING);
  sY(SYS_CONTEXT,SIGNATURE_LABEL,CSTRING);
  sY(SYS_CONTEXT,SIGNATURE_STRUCTURE,STRUCTURE);
  sY(SYS_CONTEXT,SIGNATURE_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,SIGNATURE_PROCESS,SYMBOL);
  sY(SYS_CONTEXT,SIGNATURE_PASSTHRU,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SIGNATURE_ANY,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SIGNATURE_OPTIONAL,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU,sT_SET(4,sT_SYM(SIGNATURE_STRUCTURE),sT_SYM(SIGNATURE_SYMBOL),sT_SYM(SIGNATURE_PROCESS),sT_SYM(SIGNATURE_PASSTHRU)));
  sY(SYS_CONTEXT,SIGNATURE_OUTPUT_TYPE,ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU);
  sTs(SYS_CONTEXT,SIGNATURE_SEMANTIC_VARIANTS,sT_SET(4,sT_SYM(SIGNATURE_STRUCTURE),sT_SYM(SIGNATURE_SYMBOL),sT_SYM(SIGNATURE_PROCESS),sT_SYM(SIGNATURE_ANY)));
  sTs(SYS_CONTEXT,TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL,sT_SEQ(2,sT_SYM(SIGNATURE_SEMANTIC_VARIANTS),sT_QMRK(sT_SYM(SIGNATURE_OPTIONAL))));
  sY(SYS_CONTEXT,SIGNATURE_INPUT_TYPE,TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL);
  sTs(SYS_CONTEXT,TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE,sT_SEQ(2,sT_SYM(SIGNATURE_LABEL),sT_SYM(SIGNATURE_INPUT_TYPE)));
  sY(SYS_CONTEXT,INPUT_SIGNATURE,TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE);
  sTs(SYS_CONTEXT,TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE,sT_SEQ(2,sT_SYM(SIGNATURE_LABEL),sT_SYM(SIGNATURE_OUTPUT_TYPE)));
  sY(SYS_CONTEXT,OUTPUT_SIGNATURE,TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE);
  sTs(SYS_CONTEXT,TUPLE_OF_OUTPUT_SIGNATURE_AND_ZERO_OR_MORE_OF_INPUT_SIGNATURE,sT_SEQ(2,sT_SYM(OUTPUT_SIGNATURE),sT_STAR(sT_SYM(INPUT_SIGNATURE))));
  sYs(SYS_CONTEXT,PROCESS_SIGNATURE,TUPLE_OF_OUTPUT_SIGNATURE_AND_ZERO_OR_MORE_OF_INPUT_SIGNATURE);
  sY(SYS_CONTEXT,RUN_TREE,TREE);
  sY(SYS_CONTEXT,PARAM_REF,TREE_PATH);
  sY(SYS_CONTEXT,PARAMS,LIST);
  sY(SYS_CONTEXT,RESULT_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,REDUCTION_ERROR_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,PROTOCOLS,LIST);
  sY(SYS_CONTEXT,SEQUENCES,LIST);
  sY(SYS_CONTEXT,STEP_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,STEPS,LIST);
  sTs(SYS_CONTEXT,SEQUENCE,sT_PLUS(sT_SYM(STEP_SYMBOL)));
  sT(SYS_CONTEXT,PROTOCOL_STEP,3,EXPECTATION,PARAMS,ACTION);
  sY(SYS_CONTEXT,INTERACTION,LIST);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_INTERACTION,sT_PLUS(sT_SYM(INTERACTION)));
  sY(SYS_CONTEXT,INTERACTIONS,ONE_OR_MORE_OF_INTERACTION);
  sY(SYS_CONTEXT,STEP,CSTRING);
  sY(SYS_CONTEXT,RESPONSE_STEPS,LIST);
  sT(SYS_CONTEXT,PROTOCOL,2,STEPS,SEQUENCES);
  sYs(SYS_CONTEXT,SCAPES,LIST);
  sY(SYS_CONTEXT,MANIFEST,TREE);
  sY(SYS_CONTEXT,MANIFEST_PAIR,LIST);
  sY(SYS_CONTEXT,MANIFEST_LABEL,CSTRING);
  sY(SYS_CONTEXT,MANIFEST_SPEC,SYMBOL);
  sY(SYS_CONTEXT,RECEPTOR_PACKAGE,TREE);
  sY(SYS_CONTEXT,RECEPTOR_IDENTIFIER,INTEGER);
  sY(SYS_CONTEXT,INSTALLED_RECEPTOR,TREE);
  sY(SYS_CONTEXT,BINDINGS,TREE);
  sY(SYS_CONTEXT,BINDING_PAIR,LIST);
  sY(SYS_CONTEXT,RECEPTOR_ELAPSED_TIME,INTEGER);
  sTs(SYS_CONTEXT,LIST_OF_ZERO_OR_ONE_OF_RECEPTOR_ELAPSED_TIME,sT_SEQ(1,sT_QMRK(sT_SYM(RECEPTOR_ELAPSED_TIME))));
  sY(SYS_CONTEXT,RECEPTOR_STATE,LIST_OF_ZERO_OR_ONE_OF_RECEPTOR_ELAPSED_TIME);
  sT(SYS_CONTEXT,RECEPTOR_DEF,6,DEFINITIONS,ASPECTS,FLUX,RECEPTOR_STATE,PENDING_SIGNALS,PENDING_RESPONSES);
  sY(SYS_CONTEXT,SERIALIZED_RECEPTOR,BLOB);
  sY(SYS_CONTEXT,VM_HOST_RECEPTOR,RECEPTOR);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_RECEPTOR_XADDR,sT_STAR(sT_SYM(RECEPTOR_XADDR)));
  sY(SYS_CONTEXT,ACTIVE_RECEPTORS,ZERO_OR_MORE_OF_RECEPTOR_XADDR);
  sTs(SYS_CONTEXT,LIST_OF_ACTIVE_RECEPTORS,sT_SEQ(1,sT_SYM(ACTIVE_RECEPTORS)));
  sY(SYS_CONTEXT,VM_HOST_STATE,LIST_OF_ACTIVE_RECEPTORS);
  sY(SYS_CONTEXT,CLOCK_RECEPTOR,RECEPTOR);
  sY(SYS_CONTEXT,COMPOSITORY,RECEPTOR);
  sY(SYS_CONTEXT,YEAR,INTEGER);
  sY(SYS_CONTEXT,MONTH,INTEGER);
  sY(SYS_CONTEXT,DAY,INTEGER);
  sY(SYS_CONTEXT,HOUR,INTEGER);
  sY(SYS_CONTEXT,MINUTE,INTEGER);
  sY(SYS_CONTEXT,SECOND,INTEGER);
  sT(SYS_CONTEXT,DATE,3,YEAR,MONTH,DAY);
  sT(SYS_CONTEXT,TIME,3,HOUR,MINUTE,SECOND);
  sY(SYS_CONTEXT,TODAY,DATE);
  sY(SYS_CONTEXT,NOW,TIME);
  sT(SYS_CONTEXT,TIMESTAMP,2,TODAY,NOW);
  sY(SYS_CONTEXT,TICK,TIMESTAMP);
  sY(SYS_CONTEXT,CLOCK_TELL_TIME,NULL_STRUCTURE);
  sY(SYS_CONTEXT,ERROR_LOCATION,TREE_PATH);
  sT(SYS_CONTEXT,REDUCTION_ERROR,1,ERROR_LOCATION);
  sY(SYS_CONTEXT,ZERO_DIVIDE_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,TOO_FEW_PARAMS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,TOO_MANY_PARAMS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,SIGNATURE_MISMATCH_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,NOT_A_PROCESS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,NOT_IN_SIGNAL_CONTEXT_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,INCOMPATIBLE_TYPE_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,UNIX_ERRNO_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,DEAD_STREAM_READ_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,GET_XADDR,XADDR);
  sY(SYS_CONTEXT,REQUEST_TIMING,TIMESTAMP);
  sY(SYS_CONTEXT,COUNT,INTEGER);
  sY(SYS_CONTEXT,UNLIMMITED,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,LOGICAL_OR_OF_COUNT_AND_UNLIMMITED,sT_OR(sT_SYM(COUNT),sT_SYM(UNLIMMITED)));
  sY(SYS_CONTEXT,REPETITIONS,LOGICAL_OR_OF_COUNT_AND_UNLIMMITED);
  sTs(SYS_CONTEXT,TUPLE_OF_ZERO_OR_ONE_OF_REQUEST_TIMING_AND_ZERO_OR_ONE_OF_REPETITIONS,sT_SEQ(2,sT_QMRK(sT_SYM(REQUEST_TIMING)),sT_QMRK(sT_SYM(REPETITIONS))));
  sY(SYS_CONTEXT,REQUEST_CONDITIONS,TUPLE_OF_ZERO_OR_ONE_OF_REQUEST_TIMING_AND_ZERO_OR_ONE_OF_REPETITIONS);
  sP(SYS_CONTEXT,NOOP,"no-op","result",SIGNATURE_STRUCTURE,TREE,"do",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,GET,"get instance value","value",SIGNATURE_ANY,NULL_STRUCTURE,"what",SIGNATURE_SYMBOL,GET_XADDR,0);
  sP(SYS_CONTEXT,IF,"if","result",SIGNATURE_PASSTHRU,NULL_STRUCTURE,"condition",SIGNATURE_PROCESS,BOOLEAN,"then",SIGNATURE_ANY,NULL_STRUCTURE,"else",SIGNATURE_OPTIONAL,SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,ITERATE,"iterate a process","result",SIGNATURE_PASSTHRU,NULL_STRUCTURE,"condtion",SIGNATURE_PROCESS,BOOLEAN,"do",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,SAY,"send a message to a receptor","error",SIGNATURE_SYMBOL,REDUCTION_ERROR_SYMBOL,"to",SIGNATURE_SYMBOL,RECEPTOR_ADDRESS,"on",SIGNATURE_SYMBOL,ASPECT,"message",SIGNATURE_ANY,NULL_STRUCTURE);
  sP(SYS_CONTEXT,REQUEST,"send a request to a receptor","response",SIGNATURE_STRUCTURE,TREE,"of",SIGNATURE_SYMBOL,RECEPTOR_ADDRESS,"on",SIGNATURE_SYMBOL,ASPECT,"message",SIGNATURE_ANY,NULL_STRUCTURE,"respond on",SIGNATURE_SYMBOL,RESPONSE_CARRIER,"until",SIGNATURE_OPTIONAL,SIGNATURE_SYMBOL,REQUEST_CONDITIONS,"callback",SIGNATURE_OPTIONAL,SIGNATURE_PROCESS,NULL_SYMBOL,0);
  sP(SYS_CONTEXT,LISTEN,"plant a listener","error",SIGNATURE_SYMBOL,REDUCTION_ERROR_SYMBOL,"listen for",SIGNATURE_SYMBOL,EXPECTATION,"on",SIGNATURE_SYMBOL,CARRIER,"with",SIGNATURE_SYMBOL,PARAMS,"do",SIGNATURE_SYMBOL,ACTION,0);
  sP(SYS_CONTEXT,RESPOND,"respond to signal","result",SIGNATURE_STRUCTURE,TREE,"response contents",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,QUOTE,"quote a process so that it can be passed as a value","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,INTERPOLATE_FROM_MATCH,"interploate match result in place","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,RAISE,"raise reduction error","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,STREAM_READ,"read from a stream","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,STREAM_WRITE,"write to a stream","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,STREAM_ALIVE,"check a stream is alive for reading","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,CONCAT_STR,"concatinate strings","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,ADD_INT,"addition","sum",SIGNATURE_STRUCTURE,INTEGER,"augend",SIGNATURE_STRUCTURE,INTEGER,"addend",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,SUB_INT,"subtract","difference",SIGNATURE_STRUCTURE,INTEGER,"minuend",SIGNATURE_STRUCTURE,INTEGER,"subtrahend",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,MULT_INT,"multiply","product",SIGNATURE_STRUCTURE,INTEGER,"multiplicand",SIGNATURE_STRUCTURE,INTEGER,"multiplier",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,DIV_INT,"divide","quotient",SIGNATURE_STRUCTURE,INTEGER,"dividend",SIGNATURE_STRUCTURE,INTEGER,"divisor",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,MOD_INT,"modulo","remainder",SIGNATURE_STRUCTURE,INTEGER,"dividend",SIGNATURE_STRUCTURE,INTEGER,"divisor",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,EQ_INT,"test equality","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,LT_INT,"test less than","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,GT_INT,"test greater than","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,LTE_INT,"test less than or equal","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,GTE_INT,"test greater than or equal","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,SPECIAL,"dark magic","result",SIGNATURE_STRUCTURE,TREE,0);
  sY(SYS_CONTEXT,STX_TOKENS,LIST);
  sY(SYS_CONTEXT,STX_SL,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OP,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_CP,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_SET,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_CS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_LABEL,CSTRING);
  sY(SYS_CONTEXT,STX_OG,CSTRING);
  sY(SYS_CONTEXT,STX_CG,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_EQ,CSTRING);
  sY(SYS_CONTEXT,STX_NEQ,CSTRING);
  sY(SYS_CONTEXT,STX_WALK,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_STAR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_PLUS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_Q,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_COMMA,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_EXCEPT,CSTRING);
  sY(SYS_CONTEXT,STX_NOT,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_VAL_S,CSTRING);
  sY(SYS_CONTEXT,STX_VAL_C,CHAR);
  sY(SYS_CONTEXT,STX_VAL_I,INTEGER);
  sY(SYS_CONTEXT,STX_VAL_F,FLOAT);
  sY(SYS_CONTEXT,STX_SIBS,LIST);
  sY(SYS_CONTEXT,STX_CHILD,TREE);
  sY(SYS_CONTEXT,STX_POSTFIX,TREE);
  sY(SYS_CONTEXT,TREE_DELTA_PATH,TREE_PATH);
  sY(SYS_CONTEXT,TREE_DELTA_VALUE,TREE);
  sY(SYS_CONTEXT,TREE_DELTA_COUNT,INTEGER);
  sT(SYS_CONTEXT,TREE_DELTA,3,TREE_DELTA_PATH,TREE_DELTA_VALUE,TREE_DELTA_COUNT);
  sY(SYS_CONTEXT,TREE_DELTA_ADD,TREE_DELTA);
  sY(SYS_CONTEXT,TREE_DELTA_REPLACE,TREE_DELTA);
  sY(LOCAL_CONTEXT,LINE,CSTRING);
  sY(LOCAL_CONTEXT,VERB,CSTRING);
  sY(LOCAL_CONTEXT,COMMAND_PARAMETER,CSTRING);
  sTs(LOCAL_CONTEXT,COMMAND,sT_SEQ(2,sT_SYM(VERB),sT_STAR(sT_SYM(COMMAND_PARAMETER))));
  sY(LOCAL_CONTEXT,SHELL_COMMAND,COMMAND);
  sY(TEST_CONTEXT,TEST_INT_SYMBOL,INTEGER);
  sY(TEST_CONTEXT,TEST_INT_SYMBOL2,INTEGER);
  sY(TEST_CONTEXT,TEST_FLOAT_SYMBOL,FLOAT);
  sY(TEST_CONTEXT,TEST_STR_SYMBOL,CSTRING);
  sY(TEST_CONTEXT,TEST_TREE_SYMBOL,TREE);
  sY(TEST_CONTEXT,TEST_TREE_SYMBOL2,TREE);
  sY(TEST_CONTEXT,TEST_STREAM_SYMBOL,STREAM);
  sY(TEST_CONTEXT,TEST_NAME_SYMBOL,CSTRING);
  sY(TEST_CONTEXT,TEST_RECEPTOR_SYMBOL,RECEPTOR);
  sY(TEST_CONTEXT,TEST_ALPHABETIZE_SCAPE_SYMBOL,SCAPE);
  sY(TEST_CONTEXT,TEST_SYMBOL_SYMBOL,SYMBOL);
}
