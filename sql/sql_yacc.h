
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADMIN_SYM = 262,
     ADDDATE_SYM = 263,
     AFTER_SYM = 264,
     AGAINST = 265,
     AGGREGATE_SYM = 266,
     ALGORITHM_SYM = 267,
     ALL = 268,
     ALTER = 269,
     ALWAYS_SYM = 270,
     ANALYZE_SYM = 271,
     AND_AND_SYM = 272,
     AND_SYM = 273,
     ANY_SYM = 274,
     AS = 275,
     ASC = 276,
     ASCII_SYM = 277,
     ASENSITIVE_SYM = 278,
     AT_SYM = 279,
     AUTHORS_SYM = 280,
     AUTOEXTEND_SIZE_SYM = 281,
     AUTO_INC = 282,
     AUTO_SYM = 283,
     AVG_ROW_LENGTH = 284,
     AVG_SYM = 285,
     BACKUP_SYM = 286,
     BEFORE_SYM = 287,
     BEGIN_SYM = 288,
     BETWEEN_SYM = 289,
     BIGINT = 290,
     BINARY = 291,
     BINLOG_SYM = 292,
     BIN_NUM = 293,
     BIT_AND = 294,
     BIT_OR = 295,
     BIT_SYM = 296,
     BIT_XOR = 297,
     BLOB_SYM = 298,
     BLOCK_SYM = 299,
     BOOLEAN_SYM = 300,
     BOOL_SYM = 301,
     BOTH = 302,
     BTREE_SYM = 303,
     BY = 304,
     BYTE_SYM = 305,
     CACHE_SYM = 306,
     CALL_SYM = 307,
     CASCADE = 308,
     CASCADED = 309,
     CASE_SYM = 310,
     CAST_SYM = 311,
     CATALOG_NAME_SYM = 312,
     CHAIN_SYM = 313,
     CHANGE = 314,
     CHANGED = 315,
     CHARSET = 316,
     CHAR_SYM = 317,
     CHECKPOINT_SYM = 318,
     CHECKSUM_SYM = 319,
     CHECK_SYM = 320,
     CIPHER_SYM = 321,
     CLASS_ORIGIN_SYM = 322,
     CLIENT_SYM = 323,
     CLIENT_STATS_SYM = 324,
     CLOSE_SYM = 325,
     COALESCE = 326,
     CODE_SYM = 327,
     COLLATE_SYM = 328,
     COLLATION_SYM = 329,
     COLUMNS = 330,
     COLUMN_ADD_SYM = 331,
     COLUMN_CHECK_SYM = 332,
     COLUMN_CREATE_SYM = 333,
     COLUMN_DELETE_SYM = 334,
     COLUMN_GET_SYM = 335,
     COLUMN_SYM = 336,
     COLUMN_NAME_SYM = 337,
     COMMENT_SYM = 338,
     COMMITTED_SYM = 339,
     COMMIT_SYM = 340,
     COMPACT_SYM = 341,
     COMPLETION_SYM = 342,
     COMPRESSED_SYM = 343,
     CONCURRENT = 344,
     CONDITION_SYM = 345,
     CONNECTION_SYM = 346,
     CONSISTENT_SYM = 347,
     CONSTRAINT = 348,
     CONSTRAINT_CATALOG_SYM = 349,
     CONSTRAINT_NAME_SYM = 350,
     CONSTRAINT_SCHEMA_SYM = 351,
     CONTAINS_SYM = 352,
     CONTEXT_SYM = 353,
     CONTINUE_SYM = 354,
     CONTRIBUTORS_SYM = 355,
     CONVERT_SYM = 356,
     COUNT_SYM = 357,
     CPU_SYM = 358,
     CREATE = 359,
     CROSS = 360,
     CUBE_SYM = 361,
     CURDATE = 362,
     CURRENT_SYM = 363,
     CURRENT_USER = 364,
     CURRENT_ROLE = 365,
     CURRENT_POS_SYM = 366,
     CURSOR_SYM = 367,
     CURSOR_NAME_SYM = 368,
     CURTIME = 369,
     DATABASE = 370,
     DATABASES = 371,
     DATAFILE_SYM = 372,
     DATA_SYM = 373,
     DATETIME = 374,
     DATE_ADD_INTERVAL = 375,
     DATE_SUB_INTERVAL = 376,
     DATE_SYM = 377,
     DAY_HOUR_SYM = 378,
     DAY_MICROSECOND_SYM = 379,
     DAY_MINUTE_SYM = 380,
     DAY_SECOND_SYM = 381,
     DAY_SYM = 382,
     DEALLOCATE_SYM = 383,
     DECIMAL_NUM = 384,
     DECIMAL_SYM = 385,
     DECLARE_SYM = 386,
     DEFAULT = 387,
     DEFINER_SYM = 388,
     DELAYED_SYM = 389,
     DELAY_KEY_WRITE_SYM = 390,
     DELETE_SYM = 391,
     DESC = 392,
     DESCRIBE = 393,
     DES_KEY_FILE = 394,
     DETERMINISTIC_SYM = 395,
     DIAGNOSTICS_SYM = 396,
     DIRECTORY_SYM = 397,
     DISABLE_SYM = 398,
     DISCARD = 399,
     DISK_SYM = 400,
     DISTINCT = 401,
     DIV_SYM = 402,
     DOUBLE_SYM = 403,
     DO_SYM = 404,
     DROP = 405,
     DUAL_SYM = 406,
     DUMPFILE = 407,
     DUPLICATE_SYM = 408,
     DYNAMIC_SYM = 409,
     EACH_SYM = 410,
     ELSE = 411,
     ELSEIF_SYM = 412,
     ENABLE_SYM = 413,
     ENCLOSED = 414,
     END = 415,
     ENDS_SYM = 416,
     END_OF_INPUT = 417,
     ENGINES_SYM = 418,
     ENGINE_SYM = 419,
     ENUM = 420,
     EQUAL_SYM = 421,
     ERROR_SYM = 422,
     ERRORS = 423,
     ESCAPED = 424,
     ESCAPE_SYM = 425,
     EVENTS_SYM = 426,
     EVENT_SYM = 427,
     EVERY_SYM = 428,
     EXCHANGE_SYM = 429,
     EXAMINED_SYM = 430,
     EXECUTE_SYM = 431,
     EXISTS = 432,
     EXIT_SYM = 433,
     EXPANSION_SYM = 434,
     EXPORT_SYM = 435,
     EXTENDED_SYM = 436,
     EXTENT_SIZE_SYM = 437,
     EXTRACT_SYM = 438,
     FALSE_SYM = 439,
     FAST_SYM = 440,
     FAULTS_SYM = 441,
     FETCH_SYM = 442,
     FILE_SYM = 443,
     FIRST_SYM = 444,
     FIXED_SYM = 445,
     FLOAT_NUM = 446,
     FLOAT_SYM = 447,
     FLUSH_SYM = 448,
     FORCE_SYM = 449,
     FOREIGN = 450,
     FOR_SYM = 451,
     FOUND_SYM = 452,
     FROM = 453,
     FULL = 454,
     FULLTEXT_SYM = 455,
     FUNCTION_SYM = 456,
     GE = 457,
     GENERAL = 458,
     GENERATED_SYM = 459,
     GEOMETRYCOLLECTION = 460,
     GEOMETRY_SYM = 461,
     GET_FORMAT = 462,
     GET_SYM = 463,
     GLOBAL_SYM = 464,
     GRANT = 465,
     GRANTS = 466,
     GROUP_SYM = 467,
     GROUP_CONCAT_SYM = 468,
     HANDLER_SYM = 469,
     HARD_SYM = 470,
     HASH_SYM = 471,
     HAVING = 472,
     HELP_SYM = 473,
     HEX_NUM = 474,
     HEX_STRING = 475,
     HIGH_PRIORITY = 476,
     HOST_SYM = 477,
     HOSTS_SYM = 478,
     HOUR_MICROSECOND_SYM = 479,
     HOUR_MINUTE_SYM = 480,
     HOUR_SECOND_SYM = 481,
     HOUR_SYM = 482,
     ID_SYM = 483,
     IDENT = 484,
     IDENTIFIED_SYM = 485,
     IDENT_QUOTED = 486,
     IF = 487,
     IGNORE_SYM = 488,
     IGNORE_SERVER_IDS_SYM = 489,
     IMPORT = 490,
     INDEXES = 491,
     INDEX_SYM = 492,
     INDEX_STATS_SYM = 493,
     INFILE = 494,
     INITIAL_SIZE_SYM = 495,
     INNER_SYM = 496,
     INOUT_SYM = 497,
     INSENSITIVE_SYM = 498,
     INSERT = 499,
     INSERT_METHOD = 500,
     INSTALL_SYM = 501,
     INTERVAL_SYM = 502,
     INTO = 503,
     INT_SYM = 504,
     INVOKER_SYM = 505,
     IN_SYM = 506,
     IO_SYM = 507,
     IPC_SYM = 508,
     IS = 509,
     ISOLATION = 510,
     ISSUER_SYM = 511,
     ITERATE_SYM = 512,
     JOIN_SYM = 513,
     KEYS = 514,
     KEY_BLOCK_SIZE = 515,
     KEY_SYM = 516,
     KILL_SYM = 517,
     LANGUAGE_SYM = 518,
     LAST_SYM = 519,
     LAST_VALUE = 520,
     LE = 521,
     LEADING = 522,
     LEAVES = 523,
     LEAVE_SYM = 524,
     LEFT = 525,
     LESS_SYM = 526,
     LEVEL_SYM = 527,
     LEX_HOSTNAME = 528,
     LIKE = 529,
     LIMIT = 530,
     LINEAR_SYM = 531,
     LINES = 532,
     LINESTRING = 533,
     LIST_SYM = 534,
     LOAD = 535,
     LOCAL_SYM = 536,
     LOCATOR_SYM = 537,
     LOCKS_SYM = 538,
     LOCK_SYM = 539,
     LOGFILE_SYM = 540,
     LOGS_SYM = 541,
     LONGBLOB = 542,
     LONGTEXT = 543,
     LONG_NUM = 544,
     LONG_SYM = 545,
     LOOP_SYM = 546,
     LOW_PRIORITY = 547,
     MASTER_CONNECT_RETRY_SYM = 548,
     MASTER_GTID_POS_SYM = 549,
     MASTER_HOST_SYM = 550,
     MASTER_LOG_FILE_SYM = 551,
     MASTER_LOG_POS_SYM = 552,
     MASTER_PASSWORD_SYM = 553,
     MASTER_PORT_SYM = 554,
     MASTER_SERVER_ID_SYM = 555,
     MASTER_SSL_CAPATH_SYM = 556,
     MASTER_SSL_CA_SYM = 557,
     MASTER_SSL_CERT_SYM = 558,
     MASTER_SSL_CIPHER_SYM = 559,
     MASTER_SSL_CRL_SYM = 560,
     MASTER_SSL_CRLPATH_SYM = 561,
     MASTER_SSL_KEY_SYM = 562,
     MASTER_SSL_SYM = 563,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 564,
     MASTER_SYM = 565,
     MASTER_USER_SYM = 566,
     MASTER_USE_GTID_SYM = 567,
     MASTER_HEARTBEAT_PERIOD_SYM = 568,
     MATCH = 569,
     MAX_CONNECTIONS_PER_HOUR = 570,
     MAX_QUERIES_PER_HOUR = 571,
     MAX_ROWS = 572,
     MAX_SIZE_SYM = 573,
     MAX_SYM = 574,
     MAX_UPDATES_PER_HOUR = 575,
     MAX_USER_CONNECTIONS_SYM = 576,
     MAX_VALUE_SYM = 577,
     MEDIUMBLOB = 578,
     MEDIUMINT = 579,
     MEDIUMTEXT = 580,
     MEDIUM_SYM = 581,
     MEMORY_SYM = 582,
     MERGE_SYM = 583,
     MESSAGE_TEXT_SYM = 584,
     MICROSECOND_SYM = 585,
     MIGRATE_SYM = 586,
     MINUTE_MICROSECOND_SYM = 587,
     MINUTE_SECOND_SYM = 588,
     MINUTE_SYM = 589,
     MIN_ROWS = 590,
     MIN_SYM = 591,
     MODE_SYM = 592,
     MODIFIES_SYM = 593,
     MODIFY_SYM = 594,
     MOD_SYM = 595,
     MONTH_SYM = 596,
     MULTILINESTRING = 597,
     MULTIPOINT = 598,
     MULTIPOLYGON = 599,
     MUTEX_SYM = 600,
     MYSQL_SYM = 601,
     MYSQL_ERRNO_SYM = 602,
     NAMES_SYM = 603,
     NAME_SYM = 604,
     NATIONAL_SYM = 605,
     NATURAL = 606,
     NCHAR_STRING = 607,
     NCHAR_SYM = 608,
     NDBCLUSTER_SYM = 609,
     NE = 610,
     NEG = 611,
     NEW_SYM = 612,
     NEXT_SYM = 613,
     NODEGROUP_SYM = 614,
     NONE_SYM = 615,
     NOT2_SYM = 616,
     NOT_SYM = 617,
     NOW_SYM = 618,
     NO_SYM = 619,
     NO_WAIT_SYM = 620,
     NO_WRITE_TO_BINLOG = 621,
     NULL_SYM = 622,
     NUM = 623,
     NUMBER_SYM = 624,
     NUMERIC_SYM = 625,
     NVARCHAR_SYM = 626,
     OFFSET_SYM = 627,
     OLD_PASSWORD = 628,
     ON = 629,
     ONE_SYM = 630,
     ONLY_SYM = 631,
     ONLINE_SYM = 632,
     OPEN_SYM = 633,
     OPTIMIZE = 634,
     OPTIONS_SYM = 635,
     OPTION = 636,
     OPTIONALLY = 637,
     OR2_SYM = 638,
     ORDER_SYM = 639,
     OR_OR_SYM = 640,
     OR_SYM = 641,
     OUTER = 642,
     OUTFILE = 643,
     OUT_SYM = 644,
     OWNER_SYM = 645,
     PACK_KEYS_SYM = 646,
     PAGE_SYM = 647,
     PAGE_CHECKSUM_SYM = 648,
     PARAM_MARKER = 649,
     PARSER_SYM = 650,
     PARSE_VCOL_EXPR_SYM = 651,
     PARTIAL = 652,
     PARTITION_SYM = 653,
     PARTITIONS_SYM = 654,
     PARTITIONING_SYM = 655,
     PASSWORD = 656,
     PERSISTENT_SYM = 657,
     PHASE_SYM = 658,
     PLUGINS_SYM = 659,
     PLUGIN_SYM = 660,
     POINT_SYM = 661,
     POLYGON = 662,
     PORT_SYM = 663,
     POSITION_SYM = 664,
     PRECISION = 665,
     PREPARE_SYM = 666,
     PRESERVE_SYM = 667,
     PREV_SYM = 668,
     PRIMARY_SYM = 669,
     PRIVILEGES = 670,
     PROCEDURE_SYM = 671,
     PROCESS = 672,
     PROCESSLIST_SYM = 673,
     PROFILE_SYM = 674,
     PROFILES_SYM = 675,
     PROXY_SYM = 676,
     PURGE = 677,
     QUARTER_SYM = 678,
     QUERY_SYM = 679,
     QUICK = 680,
     RANGE_SYM = 681,
     READS_SYM = 682,
     READ_ONLY_SYM = 683,
     READ_SYM = 684,
     READ_WRITE_SYM = 685,
     REAL = 686,
     REBUILD_SYM = 687,
     RECOVER_SYM = 688,
     REDOFILE_SYM = 689,
     REDO_BUFFER_SIZE_SYM = 690,
     REDUNDANT_SYM = 691,
     REFERENCES = 692,
     REGEXP = 693,
     RELAY = 694,
     RELAYLOG_SYM = 695,
     RELAY_LOG_FILE_SYM = 696,
     RELAY_LOG_POS_SYM = 697,
     RELAY_THREAD = 698,
     RELEASE_SYM = 699,
     RELOAD = 700,
     REMOVE_SYM = 701,
     RENAME = 702,
     REORGANIZE_SYM = 703,
     REPAIR = 704,
     REPEATABLE_SYM = 705,
     REPEAT_SYM = 706,
     REPLACE = 707,
     REPLICATION = 708,
     REQUIRE_SYM = 709,
     RESET_SYM = 710,
     RESIGNAL_SYM = 711,
     RESOURCES = 712,
     RESTORE_SYM = 713,
     RESTRICT = 714,
     RESUME_SYM = 715,
     RETURNED_SQLSTATE_SYM = 716,
     RETURNING_SYM = 717,
     RETURNS_SYM = 718,
     RETURN_SYM = 719,
     REVERSE_SYM = 720,
     REVOKE = 721,
     RIGHT = 722,
     ROLE_SYM = 723,
     ROLLBACK_SYM = 724,
     ROLLUP_SYM = 725,
     ROUTINE_SYM = 726,
     ROWS_SYM = 727,
     ROW_FORMAT_SYM = 728,
     ROW_SYM = 729,
     ROW_COUNT_SYM = 730,
     RTREE_SYM = 731,
     SAVEPOINT_SYM = 732,
     SCHEDULE_SYM = 733,
     SCHEMA_NAME_SYM = 734,
     SECOND_MICROSECOND_SYM = 735,
     SECOND_SYM = 736,
     SECURITY_SYM = 737,
     SELECT_SYM = 738,
     SENSITIVE_SYM = 739,
     SEPARATOR_SYM = 740,
     SERIALIZABLE_SYM = 741,
     SERIAL_SYM = 742,
     SESSION_SYM = 743,
     SERVER_SYM = 744,
     SERVER_OPTIONS = 745,
     SET = 746,
     SET_VAR = 747,
     SHARE_SYM = 748,
     SHIFT_LEFT = 749,
     SHIFT_RIGHT = 750,
     SHOW = 751,
     SHUTDOWN = 752,
     SIGNAL_SYM = 753,
     SIGNED_SYM = 754,
     SIMPLE_SYM = 755,
     SLAVE = 756,
     SLAVES = 757,
     SLAVE_POS_SYM = 758,
     SLOW = 759,
     SMALLINT = 760,
     SNAPSHOT_SYM = 761,
     SOCKET_SYM = 762,
     SOFT_SYM = 763,
     SONAME_SYM = 764,
     SOUNDS_SYM = 765,
     SOURCE_SYM = 766,
     SPATIAL_SYM = 767,
     SPECIFIC_SYM = 768,
     SQLEXCEPTION_SYM = 769,
     SQLSTATE_SYM = 770,
     SQLWARNING_SYM = 771,
     SQL_BIG_RESULT = 772,
     SQL_BUFFER_RESULT = 773,
     SQL_CACHE_SYM = 774,
     SQL_CALC_FOUND_ROWS = 775,
     SQL_NO_CACHE_SYM = 776,
     SQL_SMALL_RESULT = 777,
     SQL_SYM = 778,
     SQL_THREAD = 779,
     SSL_SYM = 780,
     STARTING = 781,
     STARTS_SYM = 782,
     START_SYM = 783,
     STATS_AUTO_RECALC_SYM = 784,
     STATS_PERSISTENT_SYM = 785,
     STATS_SAMPLE_PAGES_SYM = 786,
     STATUS_SYM = 787,
     STDDEV_SAMP_SYM = 788,
     STD_SYM = 789,
     STOP_SYM = 790,
     STORAGE_SYM = 791,
     STRAIGHT_JOIN = 792,
     STRING_SYM = 793,
     SUBCLASS_ORIGIN_SYM = 794,
     SUBDATE_SYM = 795,
     SUBJECT_SYM = 796,
     SUBPARTITIONS_SYM = 797,
     SUBPARTITION_SYM = 798,
     SUBSTRING = 799,
     SUM_SYM = 800,
     SUPER_SYM = 801,
     SUSPEND_SYM = 802,
     SWAPS_SYM = 803,
     SWITCHES_SYM = 804,
     SYSDATE = 805,
     TABLES = 806,
     TABLESPACE = 807,
     TABLE_REF_PRIORITY = 808,
     TABLE_STATS_SYM = 809,
     TABLE_SYM = 810,
     TABLE_CHECKSUM_SYM = 811,
     TABLE_NAME_SYM = 812,
     TEMPORARY = 813,
     TEMPTABLE_SYM = 814,
     TERMINATED = 815,
     TEXT_STRING = 816,
     TEXT_SYM = 817,
     THAN_SYM = 818,
     THEN_SYM = 819,
     TIMESTAMP = 820,
     TIMESTAMP_ADD = 821,
     TIMESTAMP_DIFF = 822,
     TIME_SYM = 823,
     TINYBLOB = 824,
     TINYINT = 825,
     TINYTEXT = 826,
     TO_SYM = 827,
     TRAILING = 828,
     TRANSACTION_SYM = 829,
     TRANSACTIONAL_SYM = 830,
     TRIGGERS_SYM = 831,
     TRIGGER_SYM = 832,
     TRIM = 833,
     TRUE_SYM = 834,
     TRUNCATE_SYM = 835,
     TYPES_SYM = 836,
     TYPE_SYM = 837,
     UDF_RETURNS_SYM = 838,
     ULONGLONG_NUM = 839,
     UNCOMMITTED_SYM = 840,
     UNDEFINED_SYM = 841,
     UNDERSCORE_CHARSET = 842,
     UNDOFILE_SYM = 843,
     UNDO_BUFFER_SIZE_SYM = 844,
     UNDO_SYM = 845,
     UNICODE_SYM = 846,
     UNINSTALL_SYM = 847,
     UNION_SYM = 848,
     UNIQUE_SYM = 849,
     UNKNOWN_SYM = 850,
     UNLOCK_SYM = 851,
     UNSIGNED = 852,
     UNTIL_SYM = 853,
     UPDATE_SYM = 854,
     UPGRADE_SYM = 855,
     USAGE = 856,
     USER = 857,
     USER_STATS_SYM = 858,
     USE_FRM = 859,
     USE_SYM = 860,
     USING = 861,
     UTC_DATE_SYM = 862,
     UTC_TIMESTAMP_SYM = 863,
     UTC_TIME_SYM = 864,
     VALUES = 865,
     VALUE_SYM = 866,
     VARBINARY = 867,
     VARCHAR = 868,
     VARIABLES = 869,
     VARIANCE_SYM = 870,
     VARYING = 871,
     VAR_SAMP_SYM = 872,
     VIA_SYM = 873,
     VIEW_SYM = 874,
     VIRTUAL_SYM = 875,
     WAIT_SYM = 876,
     WARNINGS = 877,
     WEEK_SYM = 878,
     WEIGHT_STRING_SYM = 879,
     WHEN_SYM = 880,
     WHERE = 881,
     WHILE_SYM = 882,
     WITH = 883,
     WITH_CUBE_SYM = 884,
     WITH_ROLLUP_SYM = 885,
     WORK_SYM = 886,
     WRAPPER_SYM = 887,
     WRITE_SYM = 888,
     X509_SYM = 889,
     XA_SYM = 890,
     XML_SYM = 891,
     XOR = 892,
     YEAR_MONTH_SYM = 893,
     YEAR_SYM = 894,
     ZEROFILL = 895,
     IMPOSSIBLE_ACTION = 896
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADMIN_SYM 262
#define ADDDATE_SYM 263
#define AFTER_SYM 264
#define AGAINST 265
#define AGGREGATE_SYM 266
#define ALGORITHM_SYM 267
#define ALL 268
#define ALTER 269
#define ALWAYS_SYM 270
#define ANALYZE_SYM 271
#define AND_AND_SYM 272
#define AND_SYM 273
#define ANY_SYM 274
#define AS 275
#define ASC 276
#define ASCII_SYM 277
#define ASENSITIVE_SYM 278
#define AT_SYM 279
#define AUTHORS_SYM 280
#define AUTOEXTEND_SIZE_SYM 281
#define AUTO_INC 282
#define AUTO_SYM 283
#define AVG_ROW_LENGTH 284
#define AVG_SYM 285
#define BACKUP_SYM 286
#define BEFORE_SYM 287
#define BEGIN_SYM 288
#define BETWEEN_SYM 289
#define BIGINT 290
#define BINARY 291
#define BINLOG_SYM 292
#define BIN_NUM 293
#define BIT_AND 294
#define BIT_OR 295
#define BIT_SYM 296
#define BIT_XOR 297
#define BLOB_SYM 298
#define BLOCK_SYM 299
#define BOOLEAN_SYM 300
#define BOOL_SYM 301
#define BOTH 302
#define BTREE_SYM 303
#define BY 304
#define BYTE_SYM 305
#define CACHE_SYM 306
#define CALL_SYM 307
#define CASCADE 308
#define CASCADED 309
#define CASE_SYM 310
#define CAST_SYM 311
#define CATALOG_NAME_SYM 312
#define CHAIN_SYM 313
#define CHANGE 314
#define CHANGED 315
#define CHARSET 316
#define CHAR_SYM 317
#define CHECKPOINT_SYM 318
#define CHECKSUM_SYM 319
#define CHECK_SYM 320
#define CIPHER_SYM 321
#define CLASS_ORIGIN_SYM 322
#define CLIENT_SYM 323
#define CLIENT_STATS_SYM 324
#define CLOSE_SYM 325
#define COALESCE 326
#define CODE_SYM 327
#define COLLATE_SYM 328
#define COLLATION_SYM 329
#define COLUMNS 330
#define COLUMN_ADD_SYM 331
#define COLUMN_CHECK_SYM 332
#define COLUMN_CREATE_SYM 333
#define COLUMN_DELETE_SYM 334
#define COLUMN_GET_SYM 335
#define COLUMN_SYM 336
#define COLUMN_NAME_SYM 337
#define COMMENT_SYM 338
#define COMMITTED_SYM 339
#define COMMIT_SYM 340
#define COMPACT_SYM 341
#define COMPLETION_SYM 342
#define COMPRESSED_SYM 343
#define CONCURRENT 344
#define CONDITION_SYM 345
#define CONNECTION_SYM 346
#define CONSISTENT_SYM 347
#define CONSTRAINT 348
#define CONSTRAINT_CATALOG_SYM 349
#define CONSTRAINT_NAME_SYM 350
#define CONSTRAINT_SCHEMA_SYM 351
#define CONTAINS_SYM 352
#define CONTEXT_SYM 353
#define CONTINUE_SYM 354
#define CONTRIBUTORS_SYM 355
#define CONVERT_SYM 356
#define COUNT_SYM 357
#define CPU_SYM 358
#define CREATE 359
#define CROSS 360
#define CUBE_SYM 361
#define CURDATE 362
#define CURRENT_SYM 363
#define CURRENT_USER 364
#define CURRENT_ROLE 365
#define CURRENT_POS_SYM 366
#define CURSOR_SYM 367
#define CURSOR_NAME_SYM 368
#define CURTIME 369
#define DATABASE 370
#define DATABASES 371
#define DATAFILE_SYM 372
#define DATA_SYM 373
#define DATETIME 374
#define DATE_ADD_INTERVAL 375
#define DATE_SUB_INTERVAL 376
#define DATE_SYM 377
#define DAY_HOUR_SYM 378
#define DAY_MICROSECOND_SYM 379
#define DAY_MINUTE_SYM 380
#define DAY_SECOND_SYM 381
#define DAY_SYM 382
#define DEALLOCATE_SYM 383
#define DECIMAL_NUM 384
#define DECIMAL_SYM 385
#define DECLARE_SYM 386
#define DEFAULT 387
#define DEFINER_SYM 388
#define DELAYED_SYM 389
#define DELAY_KEY_WRITE_SYM 390
#define DELETE_SYM 391
#define DESC 392
#define DESCRIBE 393
#define DES_KEY_FILE 394
#define DETERMINISTIC_SYM 395
#define DIAGNOSTICS_SYM 396
#define DIRECTORY_SYM 397
#define DISABLE_SYM 398
#define DISCARD 399
#define DISK_SYM 400
#define DISTINCT 401
#define DIV_SYM 402
#define DOUBLE_SYM 403
#define DO_SYM 404
#define DROP 405
#define DUAL_SYM 406
#define DUMPFILE 407
#define DUPLICATE_SYM 408
#define DYNAMIC_SYM 409
#define EACH_SYM 410
#define ELSE 411
#define ELSEIF_SYM 412
#define ENABLE_SYM 413
#define ENCLOSED 414
#define END 415
#define ENDS_SYM 416
#define END_OF_INPUT 417
#define ENGINES_SYM 418
#define ENGINE_SYM 419
#define ENUM 420
#define EQUAL_SYM 421
#define ERROR_SYM 422
#define ERRORS 423
#define ESCAPED 424
#define ESCAPE_SYM 425
#define EVENTS_SYM 426
#define EVENT_SYM 427
#define EVERY_SYM 428
#define EXCHANGE_SYM 429
#define EXAMINED_SYM 430
#define EXECUTE_SYM 431
#define EXISTS 432
#define EXIT_SYM 433
#define EXPANSION_SYM 434
#define EXPORT_SYM 435
#define EXTENDED_SYM 436
#define EXTENT_SIZE_SYM 437
#define EXTRACT_SYM 438
#define FALSE_SYM 439
#define FAST_SYM 440
#define FAULTS_SYM 441
#define FETCH_SYM 442
#define FILE_SYM 443
#define FIRST_SYM 444
#define FIXED_SYM 445
#define FLOAT_NUM 446
#define FLOAT_SYM 447
#define FLUSH_SYM 448
#define FORCE_SYM 449
#define FOREIGN 450
#define FOR_SYM 451
#define FOUND_SYM 452
#define FROM 453
#define FULL 454
#define FULLTEXT_SYM 455
#define FUNCTION_SYM 456
#define GE 457
#define GENERAL 458
#define GENERATED_SYM 459
#define GEOMETRYCOLLECTION 460
#define GEOMETRY_SYM 461
#define GET_FORMAT 462
#define GET_SYM 463
#define GLOBAL_SYM 464
#define GRANT 465
#define GRANTS 466
#define GROUP_SYM 467
#define GROUP_CONCAT_SYM 468
#define HANDLER_SYM 469
#define HARD_SYM 470
#define HASH_SYM 471
#define HAVING 472
#define HELP_SYM 473
#define HEX_NUM 474
#define HEX_STRING 475
#define HIGH_PRIORITY 476
#define HOST_SYM 477
#define HOSTS_SYM 478
#define HOUR_MICROSECOND_SYM 479
#define HOUR_MINUTE_SYM 480
#define HOUR_SECOND_SYM 481
#define HOUR_SYM 482
#define ID_SYM 483
#define IDENT 484
#define IDENTIFIED_SYM 485
#define IDENT_QUOTED 486
#define IF 487
#define IGNORE_SYM 488
#define IGNORE_SERVER_IDS_SYM 489
#define IMPORT 490
#define INDEXES 491
#define INDEX_SYM 492
#define INDEX_STATS_SYM 493
#define INFILE 494
#define INITIAL_SIZE_SYM 495
#define INNER_SYM 496
#define INOUT_SYM 497
#define INSENSITIVE_SYM 498
#define INSERT 499
#define INSERT_METHOD 500
#define INSTALL_SYM 501
#define INTERVAL_SYM 502
#define INTO 503
#define INT_SYM 504
#define INVOKER_SYM 505
#define IN_SYM 506
#define IO_SYM 507
#define IPC_SYM 508
#define IS 509
#define ISOLATION 510
#define ISSUER_SYM 511
#define ITERATE_SYM 512
#define JOIN_SYM 513
#define KEYS 514
#define KEY_BLOCK_SIZE 515
#define KEY_SYM 516
#define KILL_SYM 517
#define LANGUAGE_SYM 518
#define LAST_SYM 519
#define LAST_VALUE 520
#define LE 521
#define LEADING 522
#define LEAVES 523
#define LEAVE_SYM 524
#define LEFT 525
#define LESS_SYM 526
#define LEVEL_SYM 527
#define LEX_HOSTNAME 528
#define LIKE 529
#define LIMIT 530
#define LINEAR_SYM 531
#define LINES 532
#define LINESTRING 533
#define LIST_SYM 534
#define LOAD 535
#define LOCAL_SYM 536
#define LOCATOR_SYM 537
#define LOCKS_SYM 538
#define LOCK_SYM 539
#define LOGFILE_SYM 540
#define LOGS_SYM 541
#define LONGBLOB 542
#define LONGTEXT 543
#define LONG_NUM 544
#define LONG_SYM 545
#define LOOP_SYM 546
#define LOW_PRIORITY 547
#define MASTER_CONNECT_RETRY_SYM 548
#define MASTER_GTID_POS_SYM 549
#define MASTER_HOST_SYM 550
#define MASTER_LOG_FILE_SYM 551
#define MASTER_LOG_POS_SYM 552
#define MASTER_PASSWORD_SYM 553
#define MASTER_PORT_SYM 554
#define MASTER_SERVER_ID_SYM 555
#define MASTER_SSL_CAPATH_SYM 556
#define MASTER_SSL_CA_SYM 557
#define MASTER_SSL_CERT_SYM 558
#define MASTER_SSL_CIPHER_SYM 559
#define MASTER_SSL_CRL_SYM 560
#define MASTER_SSL_CRLPATH_SYM 561
#define MASTER_SSL_KEY_SYM 562
#define MASTER_SSL_SYM 563
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 564
#define MASTER_SYM 565
#define MASTER_USER_SYM 566
#define MASTER_USE_GTID_SYM 567
#define MASTER_HEARTBEAT_PERIOD_SYM 568
#define MATCH 569
#define MAX_CONNECTIONS_PER_HOUR 570
#define MAX_QUERIES_PER_HOUR 571
#define MAX_ROWS 572
#define MAX_SIZE_SYM 573
#define MAX_SYM 574
#define MAX_UPDATES_PER_HOUR 575
#define MAX_USER_CONNECTIONS_SYM 576
#define MAX_VALUE_SYM 577
#define MEDIUMBLOB 578
#define MEDIUMINT 579
#define MEDIUMTEXT 580
#define MEDIUM_SYM 581
#define MEMORY_SYM 582
#define MERGE_SYM 583
#define MESSAGE_TEXT_SYM 584
#define MICROSECOND_SYM 585
#define MIGRATE_SYM 586
#define MINUTE_MICROSECOND_SYM 587
#define MINUTE_SECOND_SYM 588
#define MINUTE_SYM 589
#define MIN_ROWS 590
#define MIN_SYM 591
#define MODE_SYM 592
#define MODIFIES_SYM 593
#define MODIFY_SYM 594
#define MOD_SYM 595
#define MONTH_SYM 596
#define MULTILINESTRING 597
#define MULTIPOINT 598
#define MULTIPOLYGON 599
#define MUTEX_SYM 600
#define MYSQL_SYM 601
#define MYSQL_ERRNO_SYM 602
#define NAMES_SYM 603
#define NAME_SYM 604
#define NATIONAL_SYM 605
#define NATURAL 606
#define NCHAR_STRING 607
#define NCHAR_SYM 608
#define NDBCLUSTER_SYM 609
#define NE 610
#define NEG 611
#define NEW_SYM 612
#define NEXT_SYM 613
#define NODEGROUP_SYM 614
#define NONE_SYM 615
#define NOT2_SYM 616
#define NOT_SYM 617
#define NOW_SYM 618
#define NO_SYM 619
#define NO_WAIT_SYM 620
#define NO_WRITE_TO_BINLOG 621
#define NULL_SYM 622
#define NUM 623
#define NUMBER_SYM 624
#define NUMERIC_SYM 625
#define NVARCHAR_SYM 626
#define OFFSET_SYM 627
#define OLD_PASSWORD 628
#define ON 629
#define ONE_SYM 630
#define ONLY_SYM 631
#define ONLINE_SYM 632
#define OPEN_SYM 633
#define OPTIMIZE 634
#define OPTIONS_SYM 635
#define OPTION 636
#define OPTIONALLY 637
#define OR2_SYM 638
#define ORDER_SYM 639
#define OR_OR_SYM 640
#define OR_SYM 641
#define OUTER 642
#define OUTFILE 643
#define OUT_SYM 644
#define OWNER_SYM 645
#define PACK_KEYS_SYM 646
#define PAGE_SYM 647
#define PAGE_CHECKSUM_SYM 648
#define PARAM_MARKER 649
#define PARSER_SYM 650
#define PARSE_VCOL_EXPR_SYM 651
#define PARTIAL 652
#define PARTITION_SYM 653
#define PARTITIONS_SYM 654
#define PARTITIONING_SYM 655
#define PASSWORD 656
#define PERSISTENT_SYM 657
#define PHASE_SYM 658
#define PLUGINS_SYM 659
#define PLUGIN_SYM 660
#define POINT_SYM 661
#define POLYGON 662
#define PORT_SYM 663
#define POSITION_SYM 664
#define PRECISION 665
#define PREPARE_SYM 666
#define PRESERVE_SYM 667
#define PREV_SYM 668
#define PRIMARY_SYM 669
#define PRIVILEGES 670
#define PROCEDURE_SYM 671
#define PROCESS 672
#define PROCESSLIST_SYM 673
#define PROFILE_SYM 674
#define PROFILES_SYM 675
#define PROXY_SYM 676
#define PURGE 677
#define QUARTER_SYM 678
#define QUERY_SYM 679
#define QUICK 680
#define RANGE_SYM 681
#define READS_SYM 682
#define READ_ONLY_SYM 683
#define READ_SYM 684
#define READ_WRITE_SYM 685
#define REAL 686
#define REBUILD_SYM 687
#define RECOVER_SYM 688
#define REDOFILE_SYM 689
#define REDO_BUFFER_SIZE_SYM 690
#define REDUNDANT_SYM 691
#define REFERENCES 692
#define REGEXP 693
#define RELAY 694
#define RELAYLOG_SYM 695
#define RELAY_LOG_FILE_SYM 696
#define RELAY_LOG_POS_SYM 697
#define RELAY_THREAD 698
#define RELEASE_SYM 699
#define RELOAD 700
#define REMOVE_SYM 701
#define RENAME 702
#define REORGANIZE_SYM 703
#define REPAIR 704
#define REPEATABLE_SYM 705
#define REPEAT_SYM 706
#define REPLACE 707
#define REPLICATION 708
#define REQUIRE_SYM 709
#define RESET_SYM 710
#define RESIGNAL_SYM 711
#define RESOURCES 712
#define RESTORE_SYM 713
#define RESTRICT 714
#define RESUME_SYM 715
#define RETURNED_SQLSTATE_SYM 716
#define RETURNING_SYM 717
#define RETURNS_SYM 718
#define RETURN_SYM 719
#define REVERSE_SYM 720
#define REVOKE 721
#define RIGHT 722
#define ROLE_SYM 723
#define ROLLBACK_SYM 724
#define ROLLUP_SYM 725
#define ROUTINE_SYM 726
#define ROWS_SYM 727
#define ROW_FORMAT_SYM 728
#define ROW_SYM 729
#define ROW_COUNT_SYM 730
#define RTREE_SYM 731
#define SAVEPOINT_SYM 732
#define SCHEDULE_SYM 733
#define SCHEMA_NAME_SYM 734
#define SECOND_MICROSECOND_SYM 735
#define SECOND_SYM 736
#define SECURITY_SYM 737
#define SELECT_SYM 738
#define SENSITIVE_SYM 739
#define SEPARATOR_SYM 740
#define SERIALIZABLE_SYM 741
#define SERIAL_SYM 742
#define SESSION_SYM 743
#define SERVER_SYM 744
#define SERVER_OPTIONS 745
#define SET 746
#define SET_VAR 747
#define SHARE_SYM 748
#define SHIFT_LEFT 749
#define SHIFT_RIGHT 750
#define SHOW 751
#define SHUTDOWN 752
#define SIGNAL_SYM 753
#define SIGNED_SYM 754
#define SIMPLE_SYM 755
#define SLAVE 756
#define SLAVES 757
#define SLAVE_POS_SYM 758
#define SLOW 759
#define SMALLINT 760
#define SNAPSHOT_SYM 761
#define SOCKET_SYM 762
#define SOFT_SYM 763
#define SONAME_SYM 764
#define SOUNDS_SYM 765
#define SOURCE_SYM 766
#define SPATIAL_SYM 767
#define SPECIFIC_SYM 768
#define SQLEXCEPTION_SYM 769
#define SQLSTATE_SYM 770
#define SQLWARNING_SYM 771
#define SQL_BIG_RESULT 772
#define SQL_BUFFER_RESULT 773
#define SQL_CACHE_SYM 774
#define SQL_CALC_FOUND_ROWS 775
#define SQL_NO_CACHE_SYM 776
#define SQL_SMALL_RESULT 777
#define SQL_SYM 778
#define SQL_THREAD 779
#define SSL_SYM 780
#define STARTING 781
#define STARTS_SYM 782
#define START_SYM 783
#define STATS_AUTO_RECALC_SYM 784
#define STATS_PERSISTENT_SYM 785
#define STATS_SAMPLE_PAGES_SYM 786
#define STATUS_SYM 787
#define STDDEV_SAMP_SYM 788
#define STD_SYM 789
#define STOP_SYM 790
#define STORAGE_SYM 791
#define STRAIGHT_JOIN 792
#define STRING_SYM 793
#define SUBCLASS_ORIGIN_SYM 794
#define SUBDATE_SYM 795
#define SUBJECT_SYM 796
#define SUBPARTITIONS_SYM 797
#define SUBPARTITION_SYM 798
#define SUBSTRING 799
#define SUM_SYM 800
#define SUPER_SYM 801
#define SUSPEND_SYM 802
#define SWAPS_SYM 803
#define SWITCHES_SYM 804
#define SYSDATE 805
#define TABLES 806
#define TABLESPACE 807
#define TABLE_REF_PRIORITY 808
#define TABLE_STATS_SYM 809
#define TABLE_SYM 810
#define TABLE_CHECKSUM_SYM 811
#define TABLE_NAME_SYM 812
#define TEMPORARY 813
#define TEMPTABLE_SYM 814
#define TERMINATED 815
#define TEXT_STRING 816
#define TEXT_SYM 817
#define THAN_SYM 818
#define THEN_SYM 819
#define TIMESTAMP 820
#define TIMESTAMP_ADD 821
#define TIMESTAMP_DIFF 822
#define TIME_SYM 823
#define TINYBLOB 824
#define TINYINT 825
#define TINYTEXT 826
#define TO_SYM 827
#define TRAILING 828
#define TRANSACTION_SYM 829
#define TRANSACTIONAL_SYM 830
#define TRIGGERS_SYM 831
#define TRIGGER_SYM 832
#define TRIM 833
#define TRUE_SYM 834
#define TRUNCATE_SYM 835
#define TYPES_SYM 836
#define TYPE_SYM 837
#define UDF_RETURNS_SYM 838
#define ULONGLONG_NUM 839
#define UNCOMMITTED_SYM 840
#define UNDEFINED_SYM 841
#define UNDERSCORE_CHARSET 842
#define UNDOFILE_SYM 843
#define UNDO_BUFFER_SIZE_SYM 844
#define UNDO_SYM 845
#define UNICODE_SYM 846
#define UNINSTALL_SYM 847
#define UNION_SYM 848
#define UNIQUE_SYM 849
#define UNKNOWN_SYM 850
#define UNLOCK_SYM 851
#define UNSIGNED 852
#define UNTIL_SYM 853
#define UPDATE_SYM 854
#define UPGRADE_SYM 855
#define USAGE 856
#define USER 857
#define USER_STATS_SYM 858
#define USE_FRM 859
#define USE_SYM 860
#define USING 861
#define UTC_DATE_SYM 862
#define UTC_TIMESTAMP_SYM 863
#define UTC_TIME_SYM 864
#define VALUES 865
#define VALUE_SYM 866
#define VARBINARY 867
#define VARCHAR 868
#define VARIABLES 869
#define VARIANCE_SYM 870
#define VARYING 871
#define VAR_SAMP_SYM 872
#define VIA_SYM 873
#define VIEW_SYM 874
#define VIRTUAL_SYM 875
#define WAIT_SYM 876
#define WARNINGS 877
#define WEEK_SYM 878
#define WEIGHT_STRING_SYM 879
#define WHEN_SYM 880
#define WHERE 881
#define WHILE_SYM 882
#define WITH 883
#define WITH_CUBE_SYM 884
#define WITH_ROLLUP_SYM 885
#define WORK_SYM 886
#define WRAPPER_SYM 887
#define WRITE_SYM 888
#define X509_SYM 889
#define XA_SYM 890
#define XML_SYM 891
#define XOR 892
#define YEAR_MONTH_SYM 893
#define YEAR_SYM 894
#define ZEROFILL 895
#define IMPOSSIBLE_ACTION 896




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 897 "/home/buildbot/git/sql/sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  LEX_TYPE lex_type;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  enum ha_choice choice;
  CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  class sp_condition_value *spcondvalue;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  Diagnostics_information::Which_area diag_area;
  Diagnostics_information *diag_info;
  Statement_information_item *stmt_info_item;
  Statement_information_item::Name stmt_info_item_name;
  List<Statement_information_item> *stmt_info_list;
  Condition_information_item *cond_info_item;
  Condition_information_item::Name cond_info_item_name;
  List<Condition_information_item> *cond_info_list;
  DYNCALL_CREATE_DEF *dyncol_def;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;
  bool is_not_empty;



/* Line 1676 of yacc.c  */
#line 1397 "/home/buildbot/git/mkdist/sql/sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




