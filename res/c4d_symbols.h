#ifndef C4D_SYMBOLS_H
#define C4D_SYMBOLS_H

    enum {
        IDC_CSVEFFECTOR_NAME = 10000,
        IDC_CSVNODE_NAME,
        IDC_XPRESSOEFFECTOR_NAME,
        IDC_MODATANODE_NAME,
        IDC_XPE_NAME,
        IDC_POLYSIZEEFFECTOR_NAME,

        IDC_CSVEFFECTOR_NOTREGISTERED,
        IDC_CSVNODE_NOTREGISTERED,
        IDC_XPRESSOEFFECTOR_NOTREGISTERED,
        IDC_MODATANODE_NOTREGISTERED,
        IDC_XPE_NOTREGISTERED,

        IDC_CSVEFFECTOR_STATS_FORMAT,
        IDC_CSVEFFECTOR_STATS_NOFILE,
        IDC_CSVEFFECTOR_STATS_UNKOWNERROR,

        IDC_CSVNODE_FILENAME = 19000,   // Filename [in]
        IDC_CSVNODE_HEADER,             // Bool   [in]
        IDC_CSVNODE_DELIMITER,          // LONG   [in]
        IDC_CSVNODE_ROWINDEX,           // LONG   [in]
        IDC_CSVNODE_LOADED,             // Bool   [out]
        IDC_CSVNODE_COLCOUNT_TOTAL,     // LONG   [out]
        IDC_CSVNODE_COLCOUNT,           // LONG   [out]
        IDC_CSVNODE_ROWCOUNT,           // LONG   [out]

        IDC_CSVNODE_INVALIDPORT,
        IDC_CSVNODE_TABLECOLUMN_PREFIX,
        IDC_CSVNODE_REGISTERED,

        IDC_MODATANODE_PORT_INDEX,
        IDC_MODATANODE_PORT_OBJECT,
        IDC_MODATANODE_PORT_HOST,
        IDC_MODATANODE_PORT_COUNT,
        IDC_MODATANODE_PORT_ITERCOUNT,
        IDC_MODATANODE_PORT_FALLOFF,
        IDC_MODATANODE_PORT_INDEXOUT,
        IDC_MODATANODE_PORT_SELWEIGHT,

        IDC_MODATANODE_PORT_MATRIX,
        IDC_MODATANODE_PORT_COLOR,
        IDC_MODATANODE_PORT_SIZE,
        IDC_MODATANODE_PORT_UVW,
        IDC_MODATANODE_PORT_FLAGS,
        IDC_MODATANODE_PORT_WEIGHT,
        IDC_MODATANODE_PORT_CLONE,
        IDC_MODATANODE_PORT_TIME,
        IDC_MODATANODE_PORT_FALLOFF_WGT,
        IDC_MODATANODE_PORT_SPLINE_SEGMENT,
        IDC_MODATANODE_PORT_GROWTH,
        IDC_MODATANODE_PORT_LASTMAT,
        IDC_MODATANODE_PORT_STARTMAT,
        IDC_MODATANODE_PORT_ALT_INDEX,

        IDC_C4DVERSIONTOOLD,
        IDC_REGISTERED,
    };

#endif /* C4D_SYMBOLS_H */