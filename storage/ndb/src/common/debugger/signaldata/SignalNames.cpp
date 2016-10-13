/*
   Copyright (c) 2003, 2016, Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
*/

#include <GlobalSignalNumbers.h>

const GsnName SignalNames [] = {
  { GSN_API_REGCONF,            "API_REGCONF" }
  ,{ GSN_API_REGREF,             "API_REGREF" }
  ,{ GSN_API_REGREQ,             "API_REGREQ" }
  ,{ GSN_ATTRINFO,               "ATTRINFO" }
  ,{ GSN_SCHEMA_INFO,            "SCHEMA_INFO" }
  ,{ GSN_SCHEMA_INFOCONF,        "SCHEMA_INFOCONF" }
  ,{ GSN_GET_SCHEMA_INFOREQ,     "GET_SCHEMA_INFOREQ" }
  ,{ GSN_DIHNDBTAMPER,           "DIHNDBTAMPER" }
  ,{ GSN_KEYINFO,                "KEYINFO" }
  ,{ GSN_KEYINFO20,              "KEYINFO20" }
  ,{ GSN_KEYINFO20_R,            "KEYINFO20_R" }
  ,{ GSN_NODE_FAILREP,           "NODE_FAILREP" }
  ,{ GSN_READCONF,               "READCONF" }
  ,{ GSN_SCAN_NEXTREQ,           "SCAN_NEXTREQ" }
  ,{ GSN_SCAN_TABCONF,           "SCAN_TABCONF" }
  ,{ GSN_SCAN_TABREF,            "SCAN_TABREF" }
  ,{ GSN_SCAN_TABREQ,            "SCAN_TABREQ" }
  ,{ GSN_TC_COMMITCONF,          "TC_COMMITCONF" }
  ,{ GSN_TC_COMMITREF,           "TC_COMMITREF" }
  ,{ GSN_TC_COMMITREQ,           "TC_COMMITREQ" }
  ,{ GSN_TCKEY_FAILCONF,         "TCKEY_FAILCONF" }
  ,{ GSN_TCKEY_FAILREF,          "TCKEY_FAILREF" }
  ,{ GSN_TCKEYCONF,              "TCKEYCONF" }
  ,{ GSN_TCKEYREF,               "TCKEYREF" }
  ,{ GSN_TCKEYREQ,               "TCKEYREQ" }
  ,{ GSN_TCRELEASECONF,          "TCRELEASECONF" }
  ,{ GSN_TCRELEASEREF,           "TCRELEASEREF" }
  ,{ GSN_TCRELEASEREQ,           "TCRELEASEREQ" }
  ,{ GSN_TCROLLBACKCONF,         "TCROLLBACKCONF" }
  ,{ GSN_TCROLLBACKREF,          "TCROLLBACKREF" }
  ,{ GSN_TCROLLBACKREQ,          "TCROLLBACKREQ" }
  ,{ GSN_TCROLLBACKREP,          "TCROLLBACKREP" }
  ,{ GSN_TCSEIZECONF,            "TCSEIZECONF" }
  ,{ GSN_TCSEIZEREF,             "TCSEIZEREF" }
  ,{ GSN_TCSEIZEREQ,             "TCSEIZEREQ" }
  ,{ GSN_DBINFO_SCANREQ,         "DBINFO_SCANREQ" }
  ,{ GSN_DBINFO_SCANCONF,        "DBINFO_SCANCONF" }
  ,{ GSN_DBINFO_SCANREF,         "DBINFO_SCANREF" }
  ,{ GSN_DBINFO_TRANSID_AI,      "DBINFO_TRANSID_AI" }
  ,{ GSN_TRANSID_AI,             "TRANSID_AI" }
  ,{ GSN_TRANSID_AI_R,           "TRANSID_AI_R" }
  ,{ GSN_ABORT,                  "ABORT" }
  ,{ GSN_ABORTCONF,              "ABORTCONF" }
  ,{ GSN_ABORTED,                "ABORTED" }
  ,{ GSN_ABORTREQ,               "ABORTREQ" }
  ,{ GSN_ACC_ABORTCONF,          "ACC_ABORTCONF" }
  ,{ GSN_ACC_ABORTREQ,           "ACC_ABORTREQ" }
  ,{ GSN_ACC_CHECK_SCAN,         "ACC_CHECK_SCAN" }
  ,{ GSN_ACC_COMMITCONF,         "ACC_COMMITCONF" }
  ,{ GSN_ACC_COMMITREQ,          "ACC_COMMITREQ" }
  ,{ GSN_ACC_OVER_REC,           "ACC_OVER_REC" }
  ,{ GSN_ACC_SCAN_INFO,          "ACC_SCAN_INFO" }
  ,{ GSN_ACC_SCANCONF,           "ACC_SCANCONF" }
  ,{ GSN_ACC_SCANREF,            "ACC_SCANREF" }
  ,{ GSN_ACC_SCANREQ,            "ACC_SCANREQ" }
  ,{ GSN_ACC_TO_CONF,            "ACC_TO_CONF" }
  ,{ GSN_ACC_TO_REF,             "ACC_TO_REF" }
  ,{ GSN_ACC_TO_REQ,             "ACC_TO_REQ" }
  ,{ GSN_ACCFRAGCONF,            "ACCFRAGCONF" }
  ,{ GSN_ACCFRAGREF,             "ACCFRAGREF" }
  ,{ GSN_ACCFRAGREQ,             "ACCFRAGREQ" }
  ,{ GSN_ACCKEYCONF,             "ACCKEYCONF" }
  ,{ GSN_ACCKEYREF,              "ACCKEYREF" }
  ,{ GSN_ACCKEYREQ,              "ACCKEYREQ" }
  ,{ GSN_ACCMINUPDATE,           "ACCMINUPDATE" }
  ,{ GSN_ACCSEIZECONF,           "ACCSEIZECONF" }
  ,{ GSN_ACCSEIZEREF,            "ACCSEIZEREF" }
  ,{ GSN_ACCSEIZEREQ,            "ACCSEIZEREQ" }
  ,{ GSN_ACCUPDATECONF,          "ACCUPDATECONF" }
  ,{ GSN_ACCUPDATEKEY,           "ACCUPDATEKEY" }
  ,{ GSN_ACCUPDATEREF,           "ACCUPDATEREF" }
  ,{ GSN_ADD_FRAGCONF,           "ADD_FRAGCONF" }
  ,{ GSN_ADD_FRAGREF,            "ADD_FRAGREF" }
  ,{ GSN_ADD_FRAGREQ,            "ADD_FRAGREQ" }
  ,{ GSN_API_START_REP,          "API_START_REP" }
  ,{ GSN_API_FAILCONF,           "API_FAILCONF" }
  ,{ GSN_API_FAILREQ,            "API_FAILREQ" }
  ,{ GSN_CHECK_LCP_STOP,         "CHECK_LCP_STOP" }
  ,{ GSN_CLOSE_COMCONF,          "CLOSE_COMCONF" }
  ,{ GSN_CLOSE_COMREQ,           "CLOSE_COMREQ" }
  ,{ GSN_CM_ACKADD,              "CM_ACKADD" }
  ,{ GSN_CM_ADD,                 "CM_ADD" }
  ,{ GSN_CM_ADD_REP,             "CM_ADD_REP" }  
  ,{ GSN_CM_HEARTBEAT,           "CM_HEARTBEAT" }
  ,{ GSN_CM_NODEINFOCONF,        "CM_NODEINFOCONF" }
  ,{ GSN_CM_NODEINFOREF,         "CM_NODEINFOREF" }
  ,{ GSN_CM_NODEINFOREQ,         "CM_NODEINFOREQ" }
  ,{ GSN_CM_REGCONF,             "CM_REGCONF" }
  ,{ GSN_CM_REGREF,              "CM_REGREF" }
  ,{ GSN_CM_REGREQ,              "CM_REGREQ" }
  ,{ GSN_CNTR_START_REQ,         "CNTR_START_REQ" }
  ,{ GSN_CNTR_START_REF,         "CNTR_START_REF" }
  ,{ GSN_CNTR_START_CONF,        "CNTR_START_CONF" }
  ,{ GSN_CNTR_START_REP,         "CNTR_START_REP" }
  ,{ GSN_CNTR_WAITREP,           "CNTR_WAITREP" }
  ,{ GSN_COMMIT,                 "COMMIT" }
  ,{ GSN_COMMIT_FAILCONF,        "COMMIT_FAILCONF" }
  ,{ GSN_COMMIT_FAILREQ,         "COMMIT_FAILREQ" }
  ,{ GSN_COMMITCONF,             "COMMITCONF" }
  ,{ GSN_COMMITREQ,              "COMMITREQ" }
  ,{ GSN_COMMITTED,              "COMMITTED" }
  ,{ GSN_LCP_FRAG_ORD,           "LCP_FRAG_ORD" }
  ,{ GSN_LCP_FRAG_REP,           "LCP_FRAG_REP" }
  ,{ GSN_LCP_COMPLETE_REP,       "LCP_COMPLETE_REP" }
  ,{ GSN_START_LCP_REQ,          "START_LCP_REQ" }
  ,{ GSN_START_LCP_CONF,         "START_LCP_CONF" }
  ,{ GSN_COMPLETE,               "COMPLETE" }
  ,{ GSN_COMPLETECONF,           "COMPLETECONF" }
  ,{ GSN_COMPLETED,              "COMPLETED" }
  ,{ GSN_COMPLETEREQ,            "COMPLETEREQ" }
  ,{ GSN_CONNECT_REP,            "CONNECT_REP" }
  ,{ GSN_CONTINUEB,              "CONTINUEB" }
  ,{ GSN_COPY_ACTIVECONF,        "COPY_ACTIVECONF" }
  ,{ GSN_COPY_ACTIVEREF,         "COPY_ACTIVEREF" }
  ,{ GSN_COPY_ACTIVEREQ,         "COPY_ACTIVEREQ" }
  ,{ GSN_COPY_FRAGCONF,          "COPY_FRAGCONF" }
  ,{ GSN_COPY_FRAGREF,           "COPY_FRAGREF" }
  ,{ GSN_COPY_FRAGREQ,           "COPY_FRAGREQ" }
  ,{ GSN_COPY_GCICONF,           "COPY_GCICONF" }
  ,{ GSN_COPY_GCIREQ,            "COPY_GCIREQ" }
  ,{ GSN_COPY_TABCONF,           "COPY_TABCONF" }
  ,{ GSN_COPY_TABREQ,            "COPY_TABREQ" }
  ,{ GSN_UPDATE_FRAG_STATECONF,  "UPDATE_FRAG_STATECONF" }
  ,{ GSN_UPDATE_FRAG_STATEREF,   "UPDATE_FRAG_STATEREF" }
  ,{ GSN_UPDATE_FRAG_STATEREQ,   "UPDATE_FRAG_STATEREQ" }
  ,{ GSN_DEBUG_SIG,              "DEBUG_SIG" }
  ,{ GSN_DIH_SCAN_TAB_REQ,       "DIH_SCAN_TAB_REQ" }
  ,{ GSN_DIH_SCAN_TAB_REF,       "DIH_SCAN_TAB_REF" }
  ,{ GSN_DIH_SCAN_TAB_CONF,      "DIH_SCAN_TAB_CONF" }
  ,{ GSN_DIH_SCAN_TAB_COMPLETE_REP, "DIH_SCAN_TAB_COMPLETE_REP" }
  ,{ GSN_DIADDTABCONF,           "DIADDTABCONF" }
  ,{ GSN_DIADDTABREF,            "DIADDTABREF" }
  ,{ GSN_DIADDTABREQ,            "DIADDTABREQ" }
  ,{ GSN_DICTSTARTCONF,          "DICTSTARTCONF" }
  ,{ GSN_DICTSTARTREQ,           "DICTSTARTREQ" }
  ,{ GSN_LIST_TABLES_REQ,        "LIST_TABLES_REQ" }
  ,{ GSN_LIST_TABLES_CONF,       "LIST_TABLES_CONF" }
  ,{ GSN_DIGETNODESCONF,         "DIGETNODESCONF" }
  ,{ GSN_DIGETNODESREF,          "DIGETNODESREF" }
  ,{ GSN_DIGETNODESREQ,          "DIGETNODESREQ" }
  ,{ GSN_DIH_RESTARTCONF,        "DIH_RESTARTCONF" }
  ,{ GSN_DIH_RESTARTREF,         "DIH_RESTARTREF" }
  ,{ GSN_DIH_RESTARTREQ,         "DIH_RESTARTREQ" }

  ,{ GSN_DISCONNECT_REP,         "DISCONNECT_REP" }
  ,{ GSN_DIVERIFYCONF,           "DIVERIFYCONF" }
  ,{ GSN_DIVERIFYREF,            "DIVERIFYREF" }
  ,{ GSN_DIVERIFYREQ,            "DIVERIFYREQ" }
  ,{ GSN_EMPTY_LCP_REQ,          "EMPTY_LCP_REQ" }
  ,{ GSN_EMPTY_LCP_CONF,         "EMPTY_LCP_CONF" }
  ,{ GSN_ENABLE_COMREQ,          "ENABLE_COMREQ" }
  ,{ GSN_ENABLE_COMCONF,         "ENABLE_COMCONF" }
  ,{ GSN_END_LCPCONF,            "END_LCPCONF" }
  ,{ GSN_END_LCPREQ,             "END_LCPREQ" }
  ,{ GSN_END_TOCONF,             "END_TOCONF" }
  ,{ GSN_END_TOREQ,              "END_TOREQ" }
  ,{ GSN_EVENT_REP,              "EVENT_REP" }
  ,{ GSN_EXEC_FRAGCONF,          "EXEC_FRAGCONF" }
  ,{ GSN_EXEC_FRAGREF,           "EXEC_FRAGREF" }
  ,{ GSN_EXEC_FRAGREQ,           "EXEC_FRAGREQ" }
  ,{ GSN_EXEC_SRCONF,            "EXEC_SRCONF" }
  ,{ GSN_EXEC_SRREQ,             "EXEC_SRREQ" }
  ,{ GSN_EXPANDCHECK2,           "EXPANDCHECK2" }
  ,{ GSN_FAIL_REP,               "FAIL_REP" }
  ,{ GSN_FSCLOSECONF,            "FSCLOSECONF" }
  ,{ GSN_FSCLOSEREF,             "FSCLOSEREF" }
  ,{ GSN_FSCLOSEREQ,             "FSCLOSEREQ" }
  ,{ GSN_FSOPENCONF,             "FSOPENCONF" }
  ,{ GSN_FSOPENREF,              "FSOPENREF" }
  ,{ GSN_FSOPENREQ,              "FSOPENREQ" }
  ,{ GSN_FSREADCONF,             "FSREADCONF" }
  ,{ GSN_FSREADREF,              "FSREADREF" }
  ,{ GSN_FSREADREQ,              "FSREADREQ" }
  ,{ GSN_FSSYNCCONF,             "FSSYNCCONF" }
  ,{ GSN_FSSYNCREF,              "FSSYNCREF" }
  ,{ GSN_FSSYNCREQ,              "FSSYNCREQ" }
  ,{ GSN_FSWRITECONF,            "FSWRITECONF" }
  ,{ GSN_FSWRITEREF,             "FSWRITEREF" }
  ,{ GSN_FSWRITEREQ,             "FSWRITEREQ" }
  ,{ GSN_FSAPPENDCONF,           "FSAPPENDCONF" }
  ,{ GSN_FSAPPENDREF,            "FSAPPENDREF" }
  ,{ GSN_FSAPPENDREQ,            "FSAPPENDREQ" }
  ,{ GSN_FSREMOVECONF,           "FSREMOVECONF" }
  ,{ GSN_FSREMOVEREF,            "FSREMOVEREF" }
  ,{ GSN_FSREMOVEREQ,            "FSREMOVEREQ" }
  ,{ GSN_GCP_ABORT,              "GCP_ABORT" }
  ,{ GSN_GCP_ABORTED,            "GCP_ABORTED" }
  ,{ GSN_GCP_COMMIT,             "GCP_COMMIT" }
  ,{ GSN_GCP_NODEFINISH,         "GCP_NODEFINISH" }
  ,{ GSN_GCP_NOMORETRANS,        "GCP_NOMORETRANS" }
  ,{ GSN_GCP_PREPARE,            "GCP_PREPARE" }
  ,{ GSN_GCP_PREPARECONF,        "GCP_PREPARECONF" }
  ,{ GSN_GCP_PREPAREREF,         "GCP_PREPAREREF" }
  ,{ GSN_GCP_SAVECONF,           "GCP_SAVECONF" }
  ,{ GSN_GCP_SAVEREF,            "GCP_SAVEREF" }
  ,{ GSN_GCP_SAVEREQ,            "GCP_SAVEREQ" }
  ,{ GSN_GCP_TCFINISHED,         "GCP_TCFINISHED" }
  ,{ GSN_GET_TABINFOREF,         "GET_TABINFOREF" }
  ,{ GSN_GET_TABINFOREQ,         "GET_TABINFOREQ" }
  ,{ GSN_GET_TABINFO_CONF,       "GET_TABINFO_CONF" }
  ,{ GSN_GETGCICONF,             "GETGCICONF" }
  ,{ GSN_GETGCIREQ,              "GETGCIREQ" }
  ,{ GSN_HOT_SPAREREP,           "HOT_SPAREREP" }
  ,{ GSN_INCL_NODECONF,          "INCL_NODECONF" }
  ,{ GSN_INCL_NODEREF,           "INCL_NODEREF" }
  ,{ GSN_INCL_NODEREQ,           "INCL_NODEREQ" }
  ,{ GSN_LQH_TRANSCONF,          "LQH_TRANSCONF" }
  ,{ GSN_LQH_TRANSREQ,           "LQH_TRANSREQ" }
  ,{ GSN_LQHADDATTCONF,          "LQHADDATTCONF" }
  ,{ GSN_LQHADDATTREF,           "LQHADDATTREF" }
  ,{ GSN_LQHADDATTREQ,           "LQHADDATTREQ" }
  ,{ GSN_LQHFRAGCONF,            "LQHFRAGCONF" }
  ,{ GSN_LQHFRAGREF,             "LQHFRAGREF" }
  ,{ GSN_LQHFRAGREQ,             "LQHFRAGREQ" }
  ,{ GSN_LQHKEYCONF,             "LQHKEYCONF" }
  ,{ GSN_LQHKEYREF,              "LQHKEYREF" }
  ,{ GSN_LQHKEYREQ,              "LQHKEYREQ" }
  ,{ GSN_MASTER_GCPCONF,         "MASTER_GCPCONF" }
  ,{ GSN_MASTER_GCPREF,          "MASTER_GCPREF" }
  ,{ GSN_MASTER_GCPREQ,          "MASTER_GCPREQ" }
  ,{ GSN_MASTER_LCPCONF,         "MASTER_LCPCONF" }
  ,{ GSN_MASTER_LCPREF,          "MASTER_LCPREF" }
  ,{ GSN_MASTER_LCPREQ,          "MASTER_LCPREQ" }
  ,{ GSN_MEMCHECKCONF,           "MEMCHECKCONF" }
  ,{ GSN_MEMCHECKREQ,            "MEMCHECKREQ" }
  ,{ GSN_NDB_FAILCONF,           "NDB_FAILCONF" }
  ,{ GSN_NDB_STARTCONF,          "NDB_STARTCONF" }
  ,{ GSN_NDB_STARTREF,           "NDB_STARTREF" }
  ,{ GSN_NDB_STARTREQ,           "NDB_STARTREQ" }
  ,{ GSN_NDB_STTOR,              "NDB_STTOR" }
  ,{ GSN_NDB_STTORRY,            "NDB_STTORRY" }
  ,{ GSN_NDB_TAMPER,             "NDB_TAMPER" }
  ,{ GSN_NEXT_SCANCONF,          "NEXT_SCANCONF" }
  ,{ GSN_NEXT_SCANREF,           "NEXT_SCANREF" }
  ,{ GSN_NEXT_SCANREQ,           "NEXT_SCANREQ" }
  ,{ GSN_NF_COMPLETEREP,         "NF_COMPLETEREP" }
  ,{ GSN_EXPAND_CLNT,            "EXPAND_CLNT" }
  ,{ GSN_OPEN_COMORD,            "OPEN_COMORD" }
  ,{ GSN_PACKED_SIGNAL,          "PACKED_SIGNAL" }
  ,{ GSN_PREP_FAILCONF,          "PREP_FAILCONF" }
  ,{ GSN_PREP_FAILREF,           "PREP_FAILREF" }
  ,{ GSN_PREP_FAILREQ,           "PREP_FAILREQ" }
  ,{ GSN_PRES_TOCONF,            "PRES_TOCONF" }
  ,{ GSN_PRES_TOREQ,             "PRES_TOREQ" }
  ,{ GSN_READ_NODESCONF,         "READ_NODESCONF" }
  ,{ GSN_READ_NODESREF,          "READ_NODESREF" }
  ,{ GSN_READ_NODESREQ,          "READ_NODESREQ" }
  ,{ GSN_SCAN_FRAGCONF,          "SCAN_FRAGCONF" }
  ,{ GSN_SCAN_FRAGREF,           "SCAN_FRAGREF" }
  ,{ GSN_SCAN_FRAGREQ,           "SCAN_FRAGREQ" }
  ,{ GSN_SCAN_HBREP,             "SCAN_HBREP" }
  ,{ GSN_SCAN_PROCCONF,          "SCAN_PROCCONF" }
  ,{ GSN_SCAN_PROCREQ,           "SCAN_PROCREQ" }
  ,{ GSN_SEND_PACKED,            "SEND_PACKED" }
  ,{ GSN_SET_LOGLEVELORD,        "SET_LOGLEVELORD" }
  ,{ GSN_SHRINKCHECK2,           "SHRINKCHECK2" }
  ,{ GSN_READ_CONFIG_REQ,        "READ_CONFIG_REQ" }
  ,{ GSN_READ_CONFIG_CONF,       "READ_CONFIG_CONF" }
  ,{ GSN_START_COPYCONF,         "START_COPYCONF" }
  ,{ GSN_START_COPYREF,          "START_COPYREF" }
  ,{ GSN_START_COPYREQ,          "START_COPYREQ" }
  ,{ GSN_START_EXEC_SR,          "START_EXEC_SR" }
  ,{ GSN_START_FRAGCONF,         "START_FRAGCONF" }
  ,{ GSN_START_FRAGREF,          "START_FRAGREF" }
  ,{ GSN_START_FRAGREQ,          "START_FRAGREQ" }
  ,{ GSN_START_LCP_REF,          "START_LCP_REF" }
  ,{ GSN_START_LCP_ROUND,        "START_LCP_ROUND" }
  ,{ GSN_START_MECONF,           "START_MECONF" }
  ,{ GSN_START_MEREF,            "START_MEREF" }
  ,{ GSN_START_MEREQ,            "START_MEREQ" }
  ,{ GSN_START_PERMCONF,         "START_PERMCONF" }
  ,{ GSN_START_PERMREF,          "START_PERMREF" }
  ,{ GSN_START_PERMREQ,          "START_PERMREQ" }
  ,{ GSN_START_RECCONF,          "START_RECCONF" }
  ,{ GSN_START_RECREF,           "START_RECREF" }
  ,{ GSN_START_RECREQ,           "START_RECREQ" }
  ,{ GSN_START_TOCONF,           "START_TOCONF" }
  ,{ GSN_START_TOREQ,            "START_TOREQ" }
  ,{ GSN_STORED_PROCCONF,        "STORED_PROCCONF" }
  ,{ GSN_STORED_PROCREF,         "STORED_PROCREF" }
  ,{ GSN_STORED_PROCREQ,         "STORED_PROCREQ" }
  ,{ GSN_STTOR,                  "STTOR" }
  ,{ GSN_STTORRY,                "STTORRY" }
  ,{ GSN_SYSTEM_ERROR,           "SYSTEM_ERROR" }
  ,{ GSN_TAB_COMMITCONF,         "TAB_COMMITCONF" }
  ,{ GSN_TAB_COMMITREF,          "TAB_COMMITREF" }
  ,{ GSN_TAB_COMMITREQ,          "TAB_COMMITREQ" }
  ,{ GSN_TAKE_OVERTCCONF,        "TAKE_OVERTCCONF" }
  ,{ GSN_TAKE_OVERTCREQ,         "TAKE_OVERTCREQ" }
  ,{ GSN_TC_CLOPSIZECONF,        "TC_CLOPSIZECONF" }
  ,{ GSN_TC_CLOPSIZEREQ,         "TC_CLOPSIZEREQ" }
  ,{ GSN_TC_SCHVERCONF,          "TC_SCHVERCONF" }
  ,{ GSN_TC_SCHVERREQ,           "TC_SCHVERREQ" }
  ,{ GSN_TCGETOPSIZECONF,        "TCGETOPSIZECONF" }
  ,{ GSN_TCGETOPSIZEREQ,         "TCGETOPSIZEREQ" }
  ,{ GSN_TEST_ORD,               "TEST_ORD" }
  ,{ GSN_TESTSIG,                "TESTSIG" }
  ,{ GSN_TIME_SIGNAL,            "TIME_SIGNAL" }
  ,{ GSN_TUP_ABORTREQ,           "TUP_ABORTREQ" }
  ,{ GSN_TUP_ADD_ATTCONF,        "TUP_ADD_ATTCONF" }
  ,{ GSN_TUP_ADD_ATTRREF,        "TUP_ADD_ATTRREF" }
  ,{ GSN_TUP_ADD_ATTRREQ,        "TUP_ADD_ATTRREQ" }
  ,{ GSN_TUP_ATTRINFO,           "TUP_ATTRINFO" }
  ,{ GSN_TUP_COMMITREQ,          "TUP_COMMITREQ" }
  ,{ GSN_TUPFRAGCONF,            "TUPFRAGCONF" }
  ,{ GSN_TUPFRAGREF,             "TUPFRAGREF" }
  ,{ GSN_TUPFRAGREQ,             "TUPFRAGREQ" }
  ,{ GSN_TUPKEYCONF,             "TUPKEYCONF" }
  ,{ GSN_TUPKEYREF,              "TUPKEYREF" }
  ,{ GSN_TUPKEYREQ,              "TUPKEYREQ" }
  ,{ GSN_TUPRELEASECONF,         "TUPRELEASECONF" }
  ,{ GSN_TUPRELEASEREF,          "TUPRELEASEREF" }
  ,{ GSN_TUPRELEASEREQ,          "TUPRELEASEREQ" }
  ,{ GSN_TUPSEIZECONF,           "TUPSEIZECONF" }
  ,{ GSN_TUPSEIZEREF,            "TUPSEIZEREF" }
  ,{ GSN_TUPSEIZEREQ,            "TUPSEIZEREQ" }
  ,{ GSN_UNBLO_DICTCONF,         "UNBLO_DICTCONF" }
  ,{ GSN_UNBLO_DICTREQ,          "UNBLO_DICTREQ" }
  ,{ GSN_UPDATE_TOCONF,          "UPDATE_TOCONF" }
  ,{ GSN_UPDATE_TOREF,           "UPDATE_TOREF" }
  ,{ GSN_UPDATE_TOREQ,           "UPDATE_TOREQ" }
  ,{ GSN_TUP_DEALLOCREQ,         "TUP_DEALLOCREQ" }
  ,{ GSN_TUP_WRITELOG_REQ,       "TUP_WRITELOG_REQ" }
  ,{ GSN_LQH_WRITELOG_REQ,       "LQH_WRITELOG_REQ" }

  ,{ GSN_START_ORD,              "START_ORD" }
  ,{ GSN_STOP_ORD,               "STOP_ORD" }
  ,{ GSN_TAMPER_ORD,             "TAMPER_ORD" }

  ,{ GSN_EVENT_SUBSCRIBE_REQ,    "EVENT_SUBSCRIBE_REQ" }
  ,{ GSN_EVENT_SUBSCRIBE_CONF,   "EVENT_SUBSCRIBE_CONF" }
  ,{ GSN_EVENT_SUBSCRIBE_REF,    "EVENT_SUBSCRIBE_REF" }
  ,{ GSN_DUMP_STATE_ORD,         "DUMP_STATE_ORD" }

  ,{ GSN_NODE_START_REP, "NODE_START_REP" }

  ,{ GSN_START_INFOREQ,  "START_INFOREQ" }
  ,{ GSN_START_INFOREF,  "START_INFOREF" }
  ,{ GSN_START_INFOCONF, "START_INFOCONF" }

  ,{ GSN_CHECKNODEGROUPSREQ,     "CHECKNODEGROUPSREQ" }
  ,{ GSN_CHECKNODEGROUPSCONF,    "CHECKNODEGROUPSCONF" }

  ,{ GSN_ARBIT_PREPREQ,          "ARBIT_PREPREQ" }
  ,{ GSN_ARBIT_PREPCONF,         "ARBIT_PREPCONF" }
  ,{ GSN_ARBIT_PREPREF,          "ARBIT_PREPREF" }
  ,{ GSN_ARBIT_STARTREQ,         "ARBIT_STARTREQ" }
  ,{ GSN_ARBIT_STARTCONF,        "ARBIT_STARTCONF" }
  ,{ GSN_ARBIT_STARTREF,         "ARBIT_STARTREF" }
  ,{ GSN_ARBIT_CHOOSEREQ,        "ARBIT_CHOOSEREQ" }
  ,{ GSN_ARBIT_CHOOSECONF,       "ARBIT_CHOOSECONF" }
  ,{ GSN_ARBIT_CHOOSEREF,        "ARBIT_CHOOSEREF" }
  ,{ GSN_ARBIT_STOPORD,          "ARBIT_STOPORD" }
  ,{ GSN_ARBIT_STOPREP,          "ARBIT_STOPREP" }

  ,{ GSN_TC_COMMIT_ACK,          "TC_COMMIT_ACK" }
  ,{ GSN_REMOVE_MARKER_ORD,      "REMOVE_MARKER_ORD" }

  ,{ GSN_NODE_STATE_REP,         "NODE_STATE_REP" }
  ,{ GSN_CHANGE_NODE_STATE_REQ,  "CHANGE_NODE_STATE_REQ" }
  ,{ GSN_CHANGE_NODE_STATE_CONF, "CHANGE_NODE_STATE_CONF" }

  ,{ GSN_BLOCK_COMMIT_ORD,       "BLOCK_COMMIT_ORD" }
  ,{ GSN_UNBLOCK_COMMIT_ORD,     "UNBLOCK_COMMIT_ORD" }
  
  ,{ GSN_DIH_SWITCH_REPLICA_REQ,  "DIH_SWITCH_REPLICA_REQ" }
  ,{ GSN_DIH_SWITCH_REPLICA_REF,  "DIH_SWITCH_REPLICA_REF" }
  ,{ GSN_DIH_SWITCH_REPLICA_CONF, "DIH_SWITCH_REPLICA_CONF" }
  
  ,{ GSN_STOP_PERM_REQ,           "STOP_PERM_REQ" }
  ,{ GSN_STOP_PERM_REF,           "STOP_PERM_REF" }
  ,{ GSN_STOP_PERM_CONF,          "STOP_PERM_CONF" }

  ,{ GSN_STOP_ME_REQ,             "STOP_ME_REQ" }
  ,{ GSN_STOP_ME_REF,             "STOP_ME_REF" }
  ,{ GSN_STOP_ME_CONF,            "STOP_ME_CONF" }

  ,{ GSN_WAIT_GCP_REQ,           "WAIT_GCP_REQ" }
  ,{ GSN_WAIT_GCP_REF,           "WAIT_GCP_REF" }
  ,{ GSN_WAIT_GCP_CONF,          "WAIT_GCP_CONF" }

  ,{ GSN_STOP_REQ,               "STOP_REQ" }
  ,{ GSN_STOP_REF,               "STOP_REF" }
  ,{ GSN_API_VERSION_REQ,        "API_VERSION_REQ" }
  ,{ GSN_API_VERSION_CONF,       "API_VERSION_CONF" }

  ,{ GSN_ABORT_ALL_REQ,          "ABORT_ALL_REQ" }
  ,{ GSN_ABORT_ALL_REF,          "ABORT_ALL_REF" }
  ,{ GSN_ABORT_ALL_CONF,         "ABORT_ALL_CONF" }

  ,{ GSN_DROP_TABLE_REQ,         "DROP_TABLE_REQ" }
  ,{ GSN_DROP_TABLE_REF,         "DROP_TABLE_REF" }
  ,{ GSN_DROP_TABLE_CONF,        "DROP_TABLE_CONF" }

  ,{ GSN_DROP_TAB_REQ,           "DROP_TAB_REQ" }
  ,{ GSN_DROP_TAB_REF,           "DROP_TAB_REF" }
  ,{ GSN_DROP_TAB_CONF,          "DROP_TAB_CONF" }
  
  ,{ GSN_PREP_DROP_TAB_REQ,      "PREP_DROP_TAB_REQ" }
  ,{ GSN_PREP_DROP_TAB_REF,      "PREP_DROP_TAB_REF" }
  ,{ GSN_PREP_DROP_TAB_CONF,     "PREP_DROP_TAB_CONF" }

  ,{ GSN_CREATE_TRIG_REQ,        "CREATE_TRIG_REQ" }
  ,{ GSN_CREATE_TRIG_CONF,       "CREATE_TRIG_CONF" }
  ,{ GSN_CREATE_TRIG_REF,        "CREATE_TRIG_REF" }
  ,{ GSN_ALTER_TRIG_REQ,         "ALTER_TRIG_REQ" }
  ,{ GSN_ALTER_TRIG_CONF,        "ALTER_TRIG_CONF" }
  ,{ GSN_ALTER_TRIG_REF,         "ALTER_TRIG_REF" }
  ,{ GSN_DROP_TRIG_REQ,          "DROP_TRIG_REQ" }
  ,{ GSN_DROP_TRIG_CONF,         "DROP_TRIG_CONF" }
  ,{ GSN_DROP_TRIG_REF,          "DROP_TRIG_REF" }
  ,{ GSN_FIRE_TRIG_ORD,          "FIRE_TRIG_ORD" }
  ,{ GSN_FIRE_TRIG_ORD_L,        "FIRE_TRIG_ORD_L" }
  ,{ GSN_TRIG_ATTRINFO,          "TRIG_ATTRINFO" }

  ,{ GSN_CREATE_INDX_REQ,        "CREATE_INDX_REQ" }
  ,{ GSN_CREATE_INDX_CONF,       "CREATE_INDX_CONF" }
  ,{ GSN_CREATE_INDX_REF,        "CREATE_INDX_REF" }
  ,{ GSN_DROP_INDX_REQ,          "DROP_INDX_REQ" }
  ,{ GSN_DROP_INDX_CONF,         "DROP_INDX_CONF" }
  ,{ GSN_DROP_INDX_REF,          "DROP_INDX_REF" }
  ,{ GSN_ALTER_INDX_REQ,         "ALTER_INDX_REQ" }
  ,{ GSN_ALTER_INDX_CONF,        "ALTER_INDX_CONF" }
  ,{ GSN_ALTER_INDX_REF,         "ALTER_INDX_REF" }
  ,{ GSN_TCINDXREQ, 		"TCINDXREQ" }
  ,{ GSN_TCINDXCONF, 		"TCINDXCONF" }
  ,{ GSN_TCINDXREF, 		"TCINDXREF" }
  ,{ GSN_INDXKEYINFO, 		"INDXKEYINFO" }
  ,{ GSN_INDXATTRINFO, 		"INDXATTRINFO" }
  ,{ GSN_BUILDINDXREQ, 		"BUILDINDXREQ" }
  ,{ GSN_BUILDINDXCONF, 		"BUILDINDXCONF" }
  ,{ GSN_BUILDINDXREF, 		"BUILDINDXREF" }
  //,{ GSN_TCINDXNEXTREQ, 	"TCINDXNEXTREQ" }
  //,{ GSN_TCINDEXNEXTCONF, 	"TCINDEXNEXTCONF" }
  //,{ GSN_TCINDEXNEXREF, 	"TCINDEXNEXREF" }

  ,{ GSN_CREATE_EVNT_REQ,        "CREATE_EVNT_REQ" }
  ,{ GSN_CREATE_EVNT_CONF,       "CREATE_EVNT_CONF" }
  ,{ GSN_CREATE_EVNT_REF,        "CREATE_EVNT_REF" }

  ,{ GSN_SUMA_START_ME_REQ,      "SUMA_START_ME_REQ" }  
  ,{ GSN_SUMA_START_ME_REF,      "SUMA_START_ME_REF" }  
  ,{ GSN_SUMA_START_ME_CONF,     "SUMA_START_ME_CONF" }  
  ,{ GSN_SUMA_HANDOVER_REQ,      "SUMA_HANDOVER_REQ"}
  ,{ GSN_SUMA_HANDOVER_REF,      "SUMA_HANDOVER_REF"}
  ,{ GSN_SUMA_HANDOVER_CONF,     "SUMA_HANDOVER_CONF"} 
  
  ,{ GSN_DROP_EVNT_REQ,          "DROP_EVNT_REQ" }
  ,{ GSN_DROP_EVNT_CONF,         "DROP_EVNT_CONF" }
  ,{ GSN_DROP_EVNT_REF,          "DROP_EVNT_REF" }

  ,{ GSN_BACKUP_TRIG_REQ,        "BACKUP_TRIG_REQ" }
  ,{ GSN_BACKUP_REQ,             "BACKUP_REQ" }
  ,{ GSN_BACKUP_DATA,            "BACKUP_DATA" }
  ,{ GSN_BACKUP_REF,             "BACKUP_REF" }
  ,{ GSN_BACKUP_CONF,            "BACKUP_CONF" }
  ,{ GSN_ABORT_BACKUP_ORD,       "ABORT_BACKUP_ORD" }
  ,{ GSN_BACKUP_ABORT_REP,       "BACKUP_ABORT_REP" }
  ,{ GSN_BACKUP_COMPLETE_REP,    "BACKUP_COMPLETE_REP" }
  ,{ GSN_BACKUP_NF_COMPLETE_REP, "BACKUP_NF_COMPLETE_REP" }
  ,{ GSN_DEFINE_BACKUP_REQ,      "DEFINE_BACKUP_REQ" }
  ,{ GSN_DEFINE_BACKUP_REF,      "DEFINE_BACKUP_REF" }
  ,{ GSN_DEFINE_BACKUP_CONF,     "DEFINE_BACKUP_CONF" }
  ,{ GSN_START_BACKUP_REQ,       "START_BACKUP_REQ" }
  ,{ GSN_START_BACKUP_REF,       "START_BACKUP_REF" }
  ,{ GSN_START_BACKUP_CONF,      "START_BACKUP_CONF" }
  ,{ GSN_BACKUP_FRAGMENT_REQ,    "BACKUP_FRAGMENT_REQ" }
  ,{ GSN_BACKUP_FRAGMENT_REF,    "BACKUP_FRAGMENT_REF" }
  ,{ GSN_BACKUP_FRAGMENT_CONF,   "BACKUP_FRAGMENT_CONF" }
  ,{ GSN_BACKUP_FRAGMENT_COMPLETE_REP,
      "BACKUP_FRAGMENT_COMPLETE_REP" }
  ,{ GSN_STOP_BACKUP_REQ,        "STOP_BACKUP_REQ" }
  ,{ GSN_STOP_BACKUP_REF,        "STOP_BACKUP_REF" }
  ,{ GSN_STOP_BACKUP_CONF,       "STOP_BACKUP_CONF" }
  ,{ GSN_BACKUP_STATUS_REQ,      "BACKUP_STATUS_REQ" }
  ,{ GSN_BACKUP_STATUS_REF,      "BACKUP_STATUS_REF" }
  ,{ GSN_BACKUP_STATUS_CONF,     "BACKUP_STATUS_CONF" }
  ,{ GSN_SIGNAL_DROPPED_REP,     "SIGNAL_DROPPED_REP" }
  ,{ GSN_CONTINUE_FRAGMENTED,    "CONTINUE_FRAGMENTED" }
  ,{ GSN_STOP_FOR_CRASH,         "STOP_FOR_CRASH" }
  ,{ GSN_BACKUP_LOCK_TAB_REQ,    "BACKUP_LOCK_TAB_REQ" }
  ,{ GSN_BACKUP_LOCK_TAB_CONF,   "BACKUP_LOCK_TAB_CONF" }
  ,{ GSN_BACKUP_LOCK_TAB_REF,    "BACKUP_LOCK_TAB_REF" }

  /** Util Block Services **/
  ,{ GSN_UTIL_SEQUENCE_REQ,      "UTIL_SEQUENCE_REQ" }
  ,{ GSN_UTIL_SEQUENCE_REF,      "UTIL_SEQUENCE_REF" }
  ,{ GSN_UTIL_SEQUENCE_CONF,     "UTIL_SEQUENCE_CONF" }
  ,{ GSN_UTIL_PREPARE_REQ,       "UTIL_PREPARE_REQ" }
  ,{ GSN_UTIL_PREPARE_CONF,      "UTIL_PREPARE_CONF" }
  ,{ GSN_UTIL_PREPARE_REF,       "UTIL_PREPARE_REF" }
  ,{ GSN_UTIL_EXECUTE_REQ,       "UTIL_EXECUTE_REQ" }
  ,{ GSN_UTIL_EXECUTE_CONF,      "UTIL_EXECUTE_CONF" }
  ,{ GSN_UTIL_EXECUTE_REF,       "UTIL_EXECUTE_REF" }
  ,{ GSN_UTIL_RELEASE_REQ,       "UTIL_RELEASE_REQ" }
  ,{ GSN_UTIL_RELEASE_CONF,      "UTIL_RELEASE_CONF" }
  ,{ GSN_UTIL_RELEASE_REF,       "UTIL_RELASE_REF" }

  /* Suma Block Services **/
  ,{ GSN_SUB_CREATE_REQ,         "SUB_CREATE_REQ" }
  ,{ GSN_SUB_CREATE_REF,         "SUB_CREATE_REF" }
  ,{ GSN_SUB_CREATE_CONF,        "SUB_CREATE_CONF" }
  ,{ GSN_SUB_REMOVE_REQ,         "SUB_REMOVE_REQ" }
  ,{ GSN_SUB_REMOVE_REF,         "SUB_REMOVE_REF" }
  ,{ GSN_SUB_REMOVE_CONF,        "SUB_REMOVE_CONF" }
  ,{ GSN_SUB_START_REQ,          "SUB_START_REQ" }
  ,{ GSN_SUB_START_REF,          "SUB_START_REF" }
  ,{ GSN_SUB_START_CONF,         "SUB_START_CONF" }
  ,{ GSN_SUB_STOP_REQ,           "SUB_STOP_REQ" }
  ,{ GSN_SUB_STOP_REF,           "SUB_STOP_REF" }
  ,{ GSN_SUB_STOP_CONF,          "SUB_STOP_CONF" }
  ,{ GSN_SUB_SYNC_REQ,           "SUB_SYNC_REQ" }
  ,{ GSN_SUB_SYNC_REF,           "SUB_SYNC_REF" }
  ,{ GSN_SUB_SYNC_CONF,          "SUB_SYNC_CONF" }
  ,{ GSN_SUB_TABLE_DATA,         "SUB_TABLE_DATA" }
  ,{ GSN_SUB_SYNC_CONTINUE_REQ,  "SUB_SYNC_CONTINUE_REQ" }
  ,{ GSN_SUB_SYNC_CONTINUE_REF,  "SUB_SYNC_CONTINUE_REF" }
  ,{ GSN_SUB_SYNC_CONTINUE_CONF, "SUB_SYNC_CONTINUE_CONF" }
  ,{ GSN_SUB_GCP_COMPLETE_REP,   "SUB_GCP_COMPLETE_REP" }
  ,{ GSN_SUB_GCP_COMPLETE_ACK,   "SUB_GCP_COMPLETE_ACK" }

  ,{ GSN_CREATE_SUBID_REQ,         "CREATE_SUBID_REQ" }
  ,{ GSN_CREATE_SUBID_REF,         "CREATE_SUBID_REF" }
  ,{ GSN_CREATE_SUBID_CONF,        "CREATE_SUBID_CONF" }

  ,{ GSN_CREATE_TABLE_REQ,       "CREATE_TABLE_REQ" }
  ,{ GSN_CREATE_TABLE_REF,       "CREATE_TABLE_REF" }
  ,{ GSN_CREATE_TABLE_CONF,      "CREATE_TABLE_CONF" }

  ,{ GSN_CREATE_TAB_REQ,         "CREATE_TAB_REQ" }
  ,{ GSN_CREATE_TAB_REF,         "CREATE_TAB_REF" }
  ,{ GSN_CREATE_TAB_CONF,        "CREATE_TAB_CONF" }
  
  ,{ GSN_ALTER_TABLE_REQ,          "ALTER_TABLE_REQ" }
  ,{ GSN_ALTER_TABLE_REF,          "ALTER_TABLE_REF" }
  ,{ GSN_ALTER_TABLE_CONF,         "ALTER_TABLE_CONF" }
  
  ,{ GSN_ALTER_TAB_REQ,          "ALTER_TAB_REQ" }
  ,{ GSN_ALTER_TAB_REF,          "ALTER_TAB_REF" }
  ,{ GSN_ALTER_TAB_CONF,         "ALTER_TAB_CONF" }
  
  ,{ GSN_CREATE_FRAGMENTATION_REQ,  "CREATE_FRAGMENTATION_REQ" }
  ,{ GSN_CREATE_FRAGMENTATION_REF,  "CREATE_FRAGMENTATION_REF" }
  ,{ GSN_CREATE_FRAGMENTATION_CONF, "CREATE_FRAGMENTATION_CONF" }

  ,{ GSN_SET_WAKEUP_THREAD_ORD,  "SET_WAKEUP_THREAD_ORD" }
  ,{ GSN_WAKEUP_THREAD_ORD,      "WAKEUP_THREAD_ORD" }
  ,{ GSN_SEND_WAKEUP_THREAD_ORD,  "SEND_WAKEUP_THREAD_ORD" }

  ,{ GSN_UTIL_CREATE_LOCK_REQ,   "UTIL_CREATE_LOCK_REQ" }
  ,{ GSN_UTIL_CREATE_LOCK_REF,   "UTIL_CREATE_LOCK_REF" }
  ,{ GSN_UTIL_CREATE_LOCK_CONF,  "UTIL_CREATE_LOCK_CONF" }
  ,{ GSN_UTIL_DESTROY_LOCK_REQ,  "UTIL_DESTROY_LOCK_REQ" }
  ,{ GSN_UTIL_DESTROY_LOCK_REF,  "UTIL_DESTROY_LOCK_REF" }
  ,{ GSN_UTIL_DESTROY_LOCK_CONF, "UTIL_DESTROY_LOCK_CONF" }
  ,{ GSN_UTIL_LOCK_REQ,          "UTIL_LOCK_REQ" }
  ,{ GSN_UTIL_LOCK_REF,          "UTIL_LOCK_REF" }
  ,{ GSN_UTIL_LOCK_CONF,         "UTIL_LOCK_CONF" }
  ,{ GSN_UTIL_UNLOCK_REQ,        "UTIL_UNLOCK_REQ" }
  ,{ GSN_UTIL_UNLOCK_REF,        "UTIL_UNLOCK_REF" }
  ,{ GSN_UTIL_UNLOCK_CONF,       "UTIL_UNLOCK_CONF" }

  /* TUX */
  ,{ GSN_TUXFRAGREQ,  "TUXFRAGREQ" }
  ,{ GSN_TUXFRAGCONF, "TUXFRAGCONF" }
  ,{ GSN_TUXFRAGREF,  "TUXFRAGREF" }
  ,{ GSN_TUX_ADD_ATTRREQ,  "TUX_ADD_ATTRREQ" }
  ,{ GSN_TUX_ADD_ATTRCONF, "TUX_ADD_ATTRCONF" }
  ,{ GSN_TUX_ADD_ATTRREF,  "TUX_ADD_ATTRREF" }
  ,{ GSN_TUX_MAINT_REQ,  "TUX_MAINT_REQ" }
  ,{ GSN_TUX_MAINT_CONF, "TUX_MAINT_CONF" }
  ,{ GSN_TUX_MAINT_REF,  "TUX_MAINT_REF" }
  ,{ GSN_TUX_BOUND_INFO,  "TUX_BOUND_INFO" }
  ,{ GSN_ACC_LOCKREQ,  "ACC_LOCKREQ" }

  ,{ GSN_CREATE_FILEGROUP_REQ, "CREATE_FILEGROUP_REQ" }
  ,{ GSN_CREATE_FILEGROUP_REF, "CREATE_FILEGROUP_REF" }
  ,{ GSN_CREATE_FILEGROUP_CONF, "CREATE_FILEGROUP_CONF" }
  
  ,{ GSN_CREATE_FILE_REQ,  "CREATE_FILE_REQ" }
  ,{ GSN_CREATE_FILE_REF,  "CREATE_FILE_REF" }
  ,{ GSN_CREATE_FILE_CONF, "CREATE_FILE_CONF" }
  
  ,{ GSN_DROP_FILEGROUP_REQ,  "DROP_FILEGROUP_REQ" }
  ,{ GSN_DROP_FILEGROUP_REF,  "DROP_FILEGROUP_REF" }
  ,{ GSN_DROP_FILEGROUP_CONF, "DROP_FILEGROUP_CONF" }
  
  ,{ GSN_DROP_FILE_REQ,  "DROP_FILE_REQ" }
  ,{ GSN_DROP_FILE_REF,  "DROP_FILE_REF" }
  ,{ GSN_DROP_FILE_CONF, "DROP_FILE_CONF" }
  
  ,{ GSN_CREATE_FILEGROUP_IMPL_REQ, "CREATE_FILEGROUP_IMPL_REQ" }
  ,{ GSN_CREATE_FILEGROUP_IMPL_REF, "CREATE_FILEGROUP_IMPL_REF" }
  ,{ GSN_CREATE_FILEGROUP_IMPL_CONF, "CREATE_FILEGROUP_IMPL_CONF" }
  
  ,{ GSN_CREATE_FILE_IMPL_REQ,  "CREATE_FILE_IMPL_REQ" }
  ,{ GSN_CREATE_FILE_IMPL_REF,  "CREATE_FILE_IMPL_REF" }
  ,{ GSN_CREATE_FILE_IMPL_CONF, "CREATE_FILE_IMPL_CONF" }

  ,{ GSN_DROP_FILEGROUP_IMPL_REQ,  "DROP_FILEGROUP_IMPL_REQ" }
  ,{ GSN_DROP_FILEGROUP_IMPL_REF,  "DROP_FILEGROUP_IMPL_REF" }
  ,{ GSN_DROP_FILEGROUP_IMPL_CONF, "DROP_FILEGROUP_IMPL_CONF" }

  ,{ GSN_DROP_FILE_IMPL_REQ,  "DROP_FILE_IMPL_REQ" }
  ,{ GSN_DROP_FILE_IMPL_REF,  "DROP_FILE_IMPL_REF" }
  ,{ GSN_DROP_FILE_IMPL_CONF, "DROP_FILE_IMPL_CONF" }
  
  ,{ GSN_LCP_PREPARE_REQ,  "LCP_PREPARE_REQ" }
  ,{ GSN_LCP_PREPARE_REF,  "LCP_PREPARE_REF" }
  ,{ GSN_LCP_PREPARE_CONF, "LCP_PREPARE_CONF" }

  ,{ GSN_CHECK_NODE_RESTARTREQ,  "CHECK_NODE_RESTARTREQ" }
  ,{ GSN_CHECK_NODE_RESTARTCONF, "CHECK_NODE_RESTARTCONF" }

  ,{ GSN_GET_CPU_USAGE_REQ, "GET_CPU_USAGE_REQ" }

  ,{ GSN_OVERLOAD_STATUS_REP, "OVERLOAD_STATUS_REP" }
  ,{ GSN_SEND_THREAD_STATUS_REP, "SEND_THREAD_STATUS_REP" }
  ,{ GSN_NODE_OVERLOAD_STATUS_ORD, "NODE_OVERLOAD_STATUS_ORD" }

  /* DICT LOCK */
  ,{ GSN_DICT_LOCK_REQ,          "DICT_LOCK_REQ" }
  ,{ GSN_DICT_LOCK_CONF,         "DICT_LOCK_CONF" }
  ,{ GSN_DICT_LOCK_REF,          "DICT_LOCK_REF" }
  ,{ GSN_DICT_UNLOCK_ORD,        "DICT_UNLOCK_ORD" }

  ,{ GSN_DICT_TAKEOVER_REQ,  "DICT_TAKEOVER_REQ" }
  ,{ GSN_DICT_TAKEOVER_REF,  "DICT_TAKEOVER_REF" }
  ,{ GSN_DICT_TAKEOVER_CONF, "DICT_TAKEOVER_CONF" }

  ,{ GSN_UPDATE_FRAG_DIST_KEY_ORD, "UPDATE_FRAG_DIST_KEY_ORD" }

  ,{ GSN_ROUTE_ORD, "ROUTE_ORD" }
  ,{ GSN_NODE_VERSION_REP, "NODE_VERSION_REP" }

  ,{ GSN_PREPARE_COPY_FRAG_REQ,   "PREPARE_COPY_FRAG_REQ" }
  ,{ GSN_PREPARE_COPY_FRAG_REF,   "PREPARE_COPY_FRAG_REF" }
  ,{ GSN_PREPARE_COPY_FRAG_CONF,  "PREPARE_COPY_FRAG_CONF" }

  ,{ GSN_UPGRADE_PROTOCOL_ORD, "UPGRADE_PROTOCOL_ORD" }

  ,{ GSN_TC_HBREP, "TC_HBREP" }
  
  ,{ GSN_START_TOREF, "START_TOREF" }
  ,{ GSN_END_TOREF, "END_TOREF" }
  ,{ GSN_START_PERMREP, "START_PERMREP" }

  ,{ GSN_SCHEMA_TRANS_BEGIN_REQ, "SCHEMA_TRANS_BEGIN_REQ" }
  ,{ GSN_SCHEMA_TRANS_BEGIN_CONF, "SCHEMA_TRANS_BEGIN_CONF" }
  ,{ GSN_SCHEMA_TRANS_BEGIN_REF, "SCHEMA_TRANS_BEGIN_REF" }
  ,{ GSN_SCHEMA_TRANS_END_REQ, "SCHEMA_TRANS_END_REQ" }
  ,{ GSN_SCHEMA_TRANS_END_CONF, "SCHEMA_TRANS_END_CONF" }
  ,{ GSN_SCHEMA_TRANS_END_REF, "SCHEMA_TRANS_END_REF" }
  ,{ GSN_SCHEMA_TRANS_END_REP, "SCHEMA_TRANS_END_REP" }
  ,{ GSN_SCHEMA_TRANS_IMPL_REQ, "SCHEMA_TRANS_IMPL_REQ" }
  ,{ GSN_SCHEMA_TRANS_IMPL_CONF, "SCHEMA_TRANS_IMPL_CONF" }
  ,{ GSN_SCHEMA_TRANS_IMPL_REF, "SCHEMA_TRANS_IMPL_REF" }

  ,{ GSN_CREATE_TRIG_IMPL_REQ, "CREATE_TRIG_IMPL_REQ" }
  ,{ GSN_CREATE_TRIG_IMPL_CONF, "CREATE_TRIG_IMPL_CONF" }
  ,{ GSN_CREATE_TRIG_IMPL_REF, "CREATE_TRIG_IMPL_REF" }
  ,{ GSN_DROP_TRIG_IMPL_REQ, "DROP_TRIG_IMPL_REQ" }
  ,{ GSN_DROP_TRIG_IMPL_CONF, "DROP_TRIG_IMPL_CONF" }
  ,{ GSN_DROP_TRIG_IMPL_REF, "DROP_TRIG_IMPL_REF" }
  ,{ GSN_ALTER_TRIG_IMPL_REQ, "ALTER_TRIG_IMPL_REQ" }
  ,{ GSN_ALTER_TRIG_IMPL_CONF, "ALTER_TRIG_IMPL_CONF" }
  ,{ GSN_ALTER_TRIG_IMPL_REF, "ALTER_TRIG_IMPL_REF" }

  ,{ GSN_CREATE_INDX_IMPL_REQ, "CREATE_INDX_IMPL_REQ" }
  ,{ GSN_CREATE_INDX_IMPL_CONF, "CREATE_INDX_IMPL_CONF" }
  ,{ GSN_CREATE_INDX_IMPL_REF, "CREATE_INDX_IMPL_REF" }
  ,{ GSN_DROP_INDX_IMPL_REQ, "DROP_INDX_IMPL_REQ" }
  ,{ GSN_DROP_INDX_IMPL_CONF, "DROP_INDX_IMPL_CONF" }
  ,{ GSN_DROP_INDX_IMPL_REF, "DROP_INDX_IMPL_REF" }
  ,{ GSN_ALTER_INDX_IMPL_REQ, "ALTER_INDX_IMPL_REQ" }
  ,{ GSN_ALTER_INDX_IMPL_CONF, "ALTER_INDX_IMPL_CONF" }
  ,{ GSN_ALTER_INDX_IMPL_REF, "ALTER_INDX_IMPL_REF" }

  ,{ GSN_DROP_FRAG_REQ,  "DROP_FRAG_REQ" }
  ,{ GSN_DROP_FRAG_REF,  "DROP_FRAG_REF" }
  ,{ GSN_DROP_FRAG_CONF, "DROP_FRAG_CONF" }

  ,{ GSN_BUILD_INDX_IMPL_REQ, "BUILD_INDX_IMPL_REQ" }
  ,{ GSN_BUILD_INDX_IMPL_CONF, "BUILD_INDX_IMPL_CONF" }
  ,{ GSN_BUILD_INDX_IMPL_REF, "BUILD_INDX_IMPL_REF" }

  ,{ GSN_RESTORE_LCP_REQ, "RESTORE_LCP_REQ" }
  ,{ GSN_RESTORE_LCP_CONF, "RESTORE_LCP_CONF" }
  ,{ GSN_RESTORE_LCP_REF, "RESTORE_LCP_REF" }

  ,{ GSN_CREATE_NODEGROUP_REQ, "CREATE_NODEGROUP_REQ" }
  ,{ GSN_CREATE_NODEGROUP_CONF, "CREATE_NODEGROUP_CONF" }
  ,{ GSN_CREATE_NODEGROUP_REF, "CREATE_NODEGROUP_REF" }

  ,{ GSN_CREATE_NODEGROUP_IMPL_REQ, "CREATE_NODEGROUP_IMPL_REQ" }
  ,{ GSN_CREATE_NODEGROUP_IMPL_CONF, "CREATE_NODEGROUP_IMPL_CONF" }
  ,{ GSN_CREATE_NODEGROUP_IMPL_REF, "CREATE_NODEGROUP_IMPL_REF" }

  ,{ GSN_DROP_NODEGROUP_REQ, "DROP_NODEGROUP_REQ" }
  ,{ GSN_DROP_NODEGROUP_CONF, "DROP_NODEGROUP_CONF" }
  ,{ GSN_DROP_NODEGROUP_REF, "DROP_NODEGROUP_REF" }

  ,{ GSN_DROP_NODEGROUP_IMPL_REQ, "DROP_NODEGROUP_IMPL_REQ" }
  ,{ GSN_DROP_NODEGROUP_IMPL_CONF, "DROP_NODEGROUP_IMPL_CONF" }
  ,{ GSN_DROP_NODEGROUP_IMPL_REF, "DROP_NODEGROUP_IMPL_REF" }

  ,{ GSN_CONFIG_CHECK_REQ, "CONFIG_CHECK_REQ" }
  ,{ GSN_CONFIG_CHECK_REF, "CONFIG_CHECK_REF" }
  ,{ GSN_CONFIG_CHECK_CONF, "CONFIG_CHECK_CONF" }

  ,{ GSN_CONFIG_CHANGE_REQ, "CONFIG_CHANGE_REQ" }
  ,{ GSN_CONFIG_CHANGE_REF, "CONFIG_CHANGE_REF" }
  ,{ GSN_CONFIG_CHANGE_CONF, "CONFIG_CHANGE_CONF" }

  ,{ GSN_CONFIG_CHANGE_IMPL_REQ, "CONFIG_CHANGE_IMPL_REQ" }
  ,{ GSN_CONFIG_CHANGE_IMPL_REF, "CONFIG_CHANGE_IMPL_REF" }
  ,{ GSN_CONFIG_CHANGE_IMPL_CONF, "CONFIG_CHANGE_IMPL_CONF" }

  ,{ GSN_DATA_FILE_ORD, "DATA_FILE_ORD" }

  ,{ GSN_CALLBACK_REQ, "CALLBACK_REQ" }
  ,{ GSN_CALLBACK_CONF, "CALLBACK_CONF" }
  ,{ GSN_CALLBACK_ACK, "CALLBACK_ACK" }

  ,{ GSN_RELEASE_PAGES_REQ, "RELEASE_PAGES_REQ" }
  ,{ GSN_RELEASE_PAGES_CONF, "RELEASE_PAGES_CONF" }

  ,{ GSN_CREATE_HASH_MAP_REQ, "CREATE_HASH_MAP_REQ" }
  ,{ GSN_CREATE_HASH_MAP_REF, "CREATE_HASH_MAP_REF" }
  ,{ GSN_CREATE_HASH_MAP_CONF, "CREATE_HASH_MAP_CONF" }

  ,{ GSN_SYNC_THREAD_REQ, "SYNC_THREAD_REQ" }
  ,{ GSN_SYNC_THREAD_CONF, "SYNC_THREAD_CONF" }

  ,{ GSN_LOCAL_ROUTE_ORD, "LOCAL_ROUTE_ORD" }

  ,{ GSN_ALLOC_MEM_REQ, "ALLOC_MEM_REQ" }
  ,{ GSN_ALLOC_MEM_REF, "ALLOC_MEM_REF" }
  ,{ GSN_ALLOC_MEM_CONF, "ALLOC_MEM_CONF" }

  ,{ GSN_DIH_GET_TABINFO_REQ, "DIH_GET_TABINFO_REQ" }
  ,{ GSN_DIH_GET_TABINFO_REF, "DIH_GET_TABINFO_REF" }
  ,{ GSN_DIH_GET_TABINFO_CONF, "DIH_GET_TABINFO_CONF" }

  ,{ GSN_SYNC_REQ, "SYNC_REQ" }
  ,{ GSN_SYNC_REF, "SYNC_REF" }
  ,{ GSN_SYNC_CONF, "SYNC_CONF" }

  ,{ GSN_SYNC_PATH_REQ, "SYNC_PATH_REQ" }
  ,{ GSN_SYNC_PATH_CONF, "SYNC_PATH_CONF" }

  ,{ GSN_NODE_PING_REQ, "NODE_PING_REQ" }
  ,{ GSN_NODE_PING_CONF, "NODE_PING_CONF" }

  ,{ GSN_INDEX_STAT_REQ, "INDEX_STAT_REQ" }
  ,{ GSN_INDEX_STAT_CONF, "INDEX_STAT_CONF" }
  ,{ GSN_INDEX_STAT_REF, "INDEX_STAT_REF" }
  ,{ GSN_INDEX_STAT_IMPL_REQ, "INDEX_STAT_IMPL_REQ" }
  ,{ GSN_INDEX_STAT_IMPL_CONF, "INDEX_STAT_IMPL_CONF" }
  ,{ GSN_INDEX_STAT_IMPL_REF, "INDEX_STAT_IMPL_REF" }
  ,{ GSN_INDEX_STAT_REP, "INDEX_STAT_REP" }

  ,{ GSN_GET_CONFIG_REQ, "GET_CONFIG_REQ" }
  ,{ GSN_GET_CONFIG_REF, "GET_CONFIG_REF" }
  ,{ GSN_GET_CONFIG_CONF, "GET_CONFIG_CONF" }

  ,{ GSN_ALLOC_NODEID_REQ, "ALLOC_NODEID_REQ" }
  ,{ GSN_ALLOC_NODEID_CONF, "ALLOC_NODEID_CONF" }
  ,{ GSN_ALLOC_NODEID_REF, "ALLOC_NODEID_REF" }

  ,{ GSN_LCP_STATUS_REQ, "LCP_STATUS_REQ" }
  ,{ GSN_LCP_STATUS_CONF, "LCP_STATUS_CONF" }
  ,{ GSN_LCP_STATUS_REF, "LCP_STATUS_REF" }

  ,{ GSN_CREATE_FK_REQ, "CREATE_FK_REQ" }
  ,{ GSN_CREATE_FK_REF, "CREATE_FK_REF" }
  ,{ GSN_CREATE_FK_CONF, "CREATE_FK_CONF" }
  ,{ GSN_DROP_FK_REQ, "DROP_FK_REQ" }
  ,{ GSN_DROP_FK_REF, "DROP_FK_REF" }
  ,{ GSN_DROP_FK_CONF, "DROP_FK_CONF" }
  ,{ GSN_CREATE_FK_IMPL_REQ, "CREATE_FK_IMPL_REQ" }
  ,{ GSN_CREATE_FK_IMPL_REF, "CREATE_FK_IMPL_REF" }
  ,{ GSN_CREATE_FK_IMPL_CONF, "CREATE_FK_IMPL_CONF" }
  ,{ GSN_DROP_FK_IMPL_REQ, "DROP_FK_IMPL_REQ" }
  ,{ GSN_DROP_FK_IMPL_REF, "DROP_FK_IMPL_REF" }
  ,{ GSN_DROP_FK_IMPL_CONF, "DROP_FK_IMPL_CONF" }
  ,{ GSN_BUILD_FK_REQ, "BUILD_FK_REQ" }
  ,{ GSN_BUILD_FK_REF, "BUILD_FK_REF" }
  ,{ GSN_BUILD_FK_CONF, "BUILD_FK_CONF" }
  ,{ GSN_BUILD_FK_IMPL_REQ, "BUILD_FK_IMPL_REQ" }
  ,{ GSN_BUILD_FK_IMPL_REF, "BUILD_FK_IMPL_REF" }
  ,{ GSN_BUILD_FK_IMPL_CONF, "BUILD_FK_IMPL_CONF" }
  ,{ GSN_NODE_STARTED_REP, "NODE_STARTED_REP" }
  ,{ GSN_PAUSE_LCP_REQ, "PAUSE_LCP_REQ" }
  ,{ GSN_PAUSE_LCP_CONF, "PAUSE_LCP_CONF" }
  ,{ GSN_FLUSH_LCP_REP_REQ, "FLUSH_LCP_REP_REQ" }
  ,{ GSN_FLUSH_LCP_REP_CONF, "FLUSH_LCP_REP_CONF" }
  ,{ GSN_ALLOC_NODEID_REP, "ALLOC_NODEID_REP" }
  ,{ GSN_INCL_NODE_HB_PROTOCOL_REP, "INCL_NODE_HB_PROTOCOL_REP" }
  ,{ GSN_NDBCNTR_START_WAIT_REP, "NDBCNTR_START_WAIT_REP" }
  ,{ GSN_NDBCNTR_STARTED_REP, "NDBCNTR_STARTED_REP" }
  ,{ GSN_SUMA_HANDOVER_COMPLETE_REP, "SUMA_HANDOVER_COMPLETE_REP" }
  ,{ GSN_END_TOREP, "END_TOREP" }
  ,{ GSN_LOCAL_RECOVERY_COMP_REP, "LOCAL_RECOVERY_COMP_REP" }
  ,{ GSN_CANCEL_SUBSCRIPTION_REQ, "CANCEL_SUBSCRIPTION_REQ" }
  ,{ GSN_ISOLATE_ORD, "ISOLATE_ORD" }
};
const unsigned short NO_OF_SIGNAL_NAMES = sizeof(SignalNames)/sizeof(GsnName);
