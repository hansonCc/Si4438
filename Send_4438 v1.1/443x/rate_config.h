#ifndef RATE_CONFIG_H_
#define RATE_CONFIG_H_


// MOD_type: 3    Rsymb(sps): 600    Fdev(Hz): 300    RXBW(Hz): 150000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2    
// # WB filter 1 (BW =  19.08 kHz);  NB-filter 1 (BW = 19.08 kHz)
#define RF_MODEM_MOD_TYPE_12_600 0x11, 0x20, 0x0C, 0x00, 0x03, 0x00, 0x07, 0x00, 0x5D, 0xC0, 0x05, 0xC9, 0xC3, 0x80, 0x00, 0x00
#define RF_MODEM_FREQ_DEV_0_1_600 0x11, 0x20, 0x01, 0x0C, 0x15
#define RF_MODEM_TX_RAMP_DELAY_8_600 0x11, 0x20, 0x08, 0x18, 0x01, 0x80, 0x08, 0x03, 0x80, 0x00, 0x70, 0x11
#define RF_MODEM_BCR_OSR_1_9_600 0x11, 0x20, 0x09, 0x22, 0x04, 0x12, 0x00, 0x7D, 0xD4, 0x00, 0x3F, 0x02, 0xC2
#define RF_MODEM_AFC_GEAR_7_600 0x11, 0x20, 0x07, 0x2C, 0x04, 0x36, 0x80, 0x02, 0x49, 0x26, 0x80
#define RF_MODEM_AGC_WINDOW_SIZE_3_600 0x11, 0x20, 0x03, 0x38, 0x11, 0xE4, 0xE4
#define RF_MODEM_OOK_PDTC_1_600 0x11, 0x20, 0x01, 0x40, 0x2B
#define RF_MODEM_OOK_CNT1_9_600 0x11, 0x20, 0x09, 0x42, 0xA4, 0x02, 0xD6, 0x83, 0x00, 0x12, 0x01, 0x80, 0xFF
#define RF_MODEM_RSSI_COMP_1_600 0x11, 0x20, 0x01, 0x4E, 0x3A
#define RATE_600 { \
        0x10, RF_MODEM_MOD_TYPE_12_600, \
        0x05, RF_MODEM_FREQ_DEV_0_1_600, \
        0x0C, RF_MODEM_TX_RAMP_DELAY_8_600, \
        0x0D, RF_MODEM_BCR_OSR_1_9_600, \
        0x0B, RF_MODEM_AFC_GEAR_7_600, \
        0x07, RF_MODEM_AGC_WINDOW_SIZE_3_600, \
        0x05, RF_MODEM_OOK_PDTC_1_600, \
        0x0D, RF_MODEM_OOK_CNT1_9_600, \
        0x05, RF_MODEM_RSSI_COMP_1_600, \
        0x00 \
}

// MOD_type: 3    Rsymb(sps): 1200    Fdev(Hz): 600    RXBW(Hz): 150000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2    
// # WB filter 1 (BW =  19.08 kHz);  NB-filter 1 (BW = 19.08 kHz)
#define RF_MODEM_MOD_TYPE_12_1200 0x11, 0x20, 0x0C, 0x00, 0x03, 0x00, 0x07, 0x00, 0xBB, 0x80, 0x05, 0xC9, 0xC3, 0x80, 0x00, 0x00
#define RF_MODEM_FREQ_DEV_0_1_1200 0x11, 0x20, 0x01, 0x0C, 0x2A
#define RF_MODEM_TX_RAMP_DELAY_8_1200 0x11, 0x20, 0x08, 0x18, 0x01, 0x00, 0x08, 0x03, 0x80, 0x00, 0x70, 0x10
#define RF_MODEM_BCR_OSR_1_9_1200 0x11, 0x20, 0x09, 0x22, 0x02, 0x09, 0x00, 0xFB, 0xA9, 0x00, 0xFC, 0x02, 0x00
#define RF_MODEM_AFC_GEAR_7_1200 0x11, 0x20, 0x07, 0x2C, 0x00, 0x12, 0x80, 0x0A, 0x0E, 0xA3, 0xA0
#define RF_MODEM_AGC_WINDOW_SIZE_3_1200 0x11, 0x20, 0x03, 0x38, 0x11, 0x72, 0x72
#define RF_MODEM_OOK_PDTC_1_1200 0x11, 0x20, 0x01, 0x40, 0x2B
#define RF_MODEM_OOK_CNT1_9_1200 0x11, 0x20, 0x09, 0x42, 0xA4, 0x03, 0xD6, 0x03, 0x00, 0x25, 0x01, 0x80, 0xFF
#define RATE_1200 { \
        0x10, RF_MODEM_MOD_TYPE_12_1200, \
        0x05, RF_MODEM_FREQ_DEV_0_1_1200, \
        0x0C, RF_MODEM_TX_RAMP_DELAY_8_1200, \
        0x0D, RF_MODEM_BCR_OSR_1_9_1200, \
        0x0B, RF_MODEM_AFC_GEAR_7_1200, \
        0x07, RF_MODEM_AGC_WINDOW_SIZE_3_1200, \
        0x05, RF_MODEM_OOK_PDTC_1_1200, \
        0x0D, RF_MODEM_OOK_CNT1_9_1200, \
        0x00 \
}

// MOD_type: 3    Rsymb(sps): 2400    Fdev(Hz): 1200    RXBW(Hz): 150000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2    
// # WB filter 1 (BW =  19.08 kHz);  NB-filter 1 (BW = 19.08 kHz)
#define RF_MODEM_MOD_TYPE_12_2400 0x11, 0x20, 0x0C, 0x00, 0x03, 0x00, 0x07, 0x01, 0x77, 0x00, 0x05, 0xC9, 0xC3, 0x80, 0x00, 0x00
#define RF_MODEM_FREQ_DEV_0_1_2400 0x11, 0x20, 0x01, 0x0C, 0x54
#define RF_MODEM_TX_RAMP_DELAY_8_2400 0x11, 0x20, 0x08, 0x18, 0x01, 0x00, 0x08, 0x03, 0x80, 0x00, 0x70, 0x10
#define RF_MODEM_BCR_OSR_1_9_2400 0x11, 0x20, 0x09, 0x22, 0x01, 0x04, 0x01, 0xF7, 0x51, 0x01, 0xF8, 0x02, 0x00
#define RF_MODEM_AFC_GEAR_7_2400 0x11, 0x20, 0x07, 0x2C, 0x00, 0x12, 0x80, 0x15, 0x07, 0x04, 0xA0
#define RF_MODEM_AGC_WINDOW_SIZE_3_2400 0x11, 0x20, 0x03, 0x38, 0x11, 0x39, 0x39
#define RF_MODEM_OOK_PDTC_1_2400 0x11, 0x20, 0x01, 0x40, 0x2A
#define RF_MODEM_OOK_CNT1_9_2400 0x11, 0x20, 0x09, 0x42, 0xA4, 0x03, 0xD6, 0x03, 0x00, 0x4A, 0x01, 0x80, 0xFF
#define RATE_2400 { \
        0x10, RF_MODEM_MOD_TYPE_12_2400, \
        0x05, RF_MODEM_FREQ_DEV_0_1_2400, \
        0x0C, RF_MODEM_TX_RAMP_DELAY_8_2400, \
        0x0D, RF_MODEM_BCR_OSR_1_9_2400, \
        0x0B, RF_MODEM_AFC_GEAR_7_2400, \
        0x07, RF_MODEM_AGC_WINDOW_SIZE_3_2400, \
        0x05, RF_MODEM_OOK_PDTC_1_2400, \
        0x0D, RF_MODEM_OOK_CNT1_9_2400, \
        0x00 \
}

// MOD_type: 3    Rsymb(sps): 4800    Fdev(Hz): 2400    RXBW(Hz): 150000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2    
// # WB filter 3 (BW =  23.15 kHz);  NB-filter 3 (BW = 23.15 kHz)
#define RF_MODEM_MOD_TYPE_12_4800 0x11, 0x20, 0x0C, 0x00, 0x03, 0x00, 0x07, 0x02, 0xEE, 0x00, 0x05, 0xC9, 0xC3, 0x80, 0x00, 0x00
#define RF_MODEM_FREQ_DEV_0_1_4800 0x11, 0x20, 0x01, 0x0C, 0xA8
#define RF_MODEM_BCR_OSR_1_9_4800 0x11, 0x20, 0x09, 0x22, 0x00, 0xC3, 0x02, 0x9F, 0x17, 0x02, 0xA0, 0x02, 0x00
#define RF_MODEM_AFC_GEAR_7_4800 0x11, 0x20, 0x07, 0x2C, 0x00, 0x12, 0x80, 0x2A, 0x04, 0x3A, 0xA0
#define RF_MODEM_AGC_WINDOW_SIZE_3_4800 0x11, 0x20, 0x03, 0x38, 0x11, 0x2B, 0x2B
#define RF_MODEM_OOK_PDTC_1_4800 0x11, 0x20, 0x01, 0x40, 0x29
#define RF_MODEM_OOK_CNT1_9_4800 0x11, 0x20, 0x09, 0x42, 0xA4, 0x03, 0xD6, 0x03, 0x00, 0x62, 0x01, 0x80, 0xFF
#define RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_4800 0x11, 0x21, 0x0C, 0x00, 0xCC, 0xA1, 0x30, 0xA0, 0x21, 0xD1, 0xB9, 0xC9, 0xEA, 0x05, 0x12, 0x11
#define RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_4800 0x11, 0x21, 0x0C, 0x0C, 0x0A, 0x04, 0x15, 0xFC, 0x03, 0x00, 0xCC, 0xA1, 0x30, 0xA0, 0x21, 0xD1
#define RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_4800 0x11, 0x21, 0x0C, 0x18, 0xB9, 0xC9, 0xEA, 0x05, 0x12, 0x11, 0x0A, 0x04, 0x15, 0xFC, 0x03, 0x00
#define RATE_4800 { \
        0x10, RF_MODEM_MOD_TYPE_12_4800, \
        0x05, RF_MODEM_FREQ_DEV_0_1_4800, \
        0x0D, RF_MODEM_BCR_OSR_1_9_4800, \
        0x0B, RF_MODEM_AFC_GEAR_7_4800, \
        0x07, RF_MODEM_AGC_WINDOW_SIZE_3_4800, \
        0x05, RF_MODEM_OOK_PDTC_1_4800, \
        0x0D, RF_MODEM_OOK_CNT1_9_4800, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_4800, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_4800, \
        0x10, RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_4800, \
        0x00 \
}

// MOD_type: 3    Rsymb(sps): 9600    Fdev(Hz): 4800    RXBW(Hz): 3000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2    
// # WB filter 1 (BW =  28.62 KHz);  NB-filter 1 (BW = 28.62 KHz)
#define RATE_9600 { \
        0x10, RF_MODEM_MOD_TYPE_12, \
        0x05, RF_MODEM_FREQ_DEV_0_1, \
        0x0C, RF_MODEM_TX_RAMP_DELAY_8, \
        0x0D, RF_MODEM_BCR_OSR_1_9, \
        0x0B, RF_MODEM_AFC_GEAR_7, \
        0x05, RF_MODEM_AGC_CONTROL_1, \
        0x07, RF_MODEM_AGC_WINDOW_SIZE_3, \
        0x05, RF_MODEM_OOK_PDTC_1, \
        0x0D, RF_MODEM_OOK_CNT1_9, \
        0x05, RF_MODEM_RSSI_CONTROL_1, \
        0x05, RF_MODEM_RSSI_COMP_1, \
        0x05, RF_MODEM_CLKGEN_BAND_1, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12, \
        0x10, RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12, \
        0x08, RF_PA_MODE_4, \
        0x0B, RF_SYNTH_PFDCP_CPFF_7, \
				0x00 \
}

// MOD_type: 3    Rsymb(sps): 40000    Fdev(Hz): 20000    RXBW(Hz): 150000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2    
// # WB filter 4 (BW =  82.64 kHz);  NB-filter 4 (BW = 82.64 kHz)
#define RF_MODEM_MOD_TYPE_12_40K 0x11, 0x20, 0x0C, 0x00, 0x03, 0x00, 0x07, 0x0C, 0x35, 0x00, 0x09, 0xC9, 0xC3, 0x80, 0x00, 0x05
#define RF_MODEM_FREQ_DEV_0_1_40K 0x11, 0x20, 0x01, 0x0C, 0x76
#define RF_MODEM_TX_RAMP_DELAY_8_40K 0x11, 0x20, 0x08, 0x18, 0x01, 0x00, 0x08, 0x03, 0x80, 0x00, 0x20, 0x20
#define RF_MODEM_BCR_OSR_1_9_40K 0x11, 0x20, 0x09, 0x22, 0x00, 0x5E, 0x05, 0x76, 0x1A, 0x05, 0x72, 0x02, 0x00
#define RF_MODEM_AFC_GEAR_7_40K 0x11, 0x20, 0x07, 0x2C, 0x00, 0x12, 0x81, 0x5E, 0x01, 0xCD, 0xA0
#define RF_MODEM_OOK_CNT1_9_40K 0x11, 0x20, 0x09, 0x42, 0xA4, 0x03, 0xD6, 0x03, 0x00, 0xCC, 0x01, 0x80, 0xFF
#define RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_40K 0x11, 0x21, 0x0C, 0x00, 0xA2, 0x81, 0x26, 0xAF, 0x3F, 0xEE, 0xC8, 0xC7, 0xDB, 0xF2, 0x02, 0x08
#define RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_40K 0x11, 0x21, 0x0C, 0x0C, 0x07, 0x03, 0x15, 0xFC, 0x0F, 0x00, 0xA2, 0x81, 0x26, 0xAF, 0x3F, 0xEE
#define RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_40K 0x11, 0x21, 0x0C, 0x18, 0xC8, 0xC7, 0xDB, 0xF2, 0x02, 0x08, 0x07, 0x03, 0x15, 0xFC, 0x0F, 0x00
#define RATE_40K { \
        0x10, RF_MODEM_MOD_TYPE_12_40K, \
        0x05, RF_MODEM_FREQ_DEV_0_1_40K, \
        0x0C, RF_MODEM_TX_RAMP_DELAY_8_40K, \
        0x0D, RF_MODEM_BCR_OSR_1_9_40K, \
        0x0B, RF_MODEM_AFC_GEAR_7_40K, \
        0x0D, RF_MODEM_OOK_CNT1_9_40K, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_40K, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_40K, \
        0x10, RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_40K, \
        0x00 \
}

// MOD_type: 3    Rsymb(sps): 100000    Fdev(Hz): 50000    RXBW(Hz): 150000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2    
// # WB filter 2 (BW = 206.12 kHz);  NB-filter 2 (BW = 206.12 kHz)
#define RF_MODEM_MOD_TYPE_12_100K 0x11, 0x20, 0x0C, 0x00, 0x03, 0x00, 0x07, 0x1E, 0x84, 0x80, 0x09, 0xC9, 0xC3, 0x80, 0x00, 0x0D
#define RF_MODEM_FREQ_DEV_0_1_100K 0x11, 0x20, 0x01, 0x0C, 0xA7
#define RF_MODEM_TX_RAMP_DELAY_8_100K 0x11, 0x20, 0x08, 0x18, 0x01, 0x00, 0x08, 0x03, 0x80, 0x00, 0x10, 0x20
#define RF_MODEM_BCR_OSR_1_9_100K 0x11, 0x20, 0x09, 0x22, 0x00, 0x4B, 0x06, 0xD3, 0xA0, 0x06, 0xD4, 0x02, 0x00
#define RF_MODEM_AFC_GEAR_7_100K 0x11, 0x20, 0x07, 0x2C, 0x00, 0x23, 0x86, 0xD4, 0x00, 0xD3, 0xA0
#define RF_MODEM_AGC_WINDOW_SIZE_3_100K 0x11, 0x20, 0x03, 0x38, 0x11, 0x10, 0x10
#define RF_MODEM_OOK_CNT1_9_100K 0x11, 0x20, 0x09, 0x42, 0xA4, 0x03, 0xD6, 0x03, 0x01, 0x00, 0x01, 0x80, 0xFF
#define RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_100K 0x11, 0x21, 0x0C, 0x00, 0xFF, 0xC4, 0x30, 0x7F, 0xF5, 0xB5, 0xB8, 0xDE, 0x05, 0x17, 0x16, 0x0C
#define RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_100K 0x11, 0x21, 0x0C, 0x0C, 0x03, 0x00, 0x15, 0xFF, 0x00, 0x00, 0xFF, 0xC4, 0x30, 0x7F, 0xF5, 0xB5
#define RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_100K 0x11, 0x21, 0x0C, 0x18, 0xB8, 0xDE, 0x05, 0x17, 0x16, 0x0C, 0x03, 0x00, 0x15, 0xFF, 0x00, 0x00
#define RF_SYNTH_PFDCP_CPFF_7_100K 0x11, 0x23, 0x07, 0x00, 0x34, 0x04, 0x0B, 0x04, 0x07, 0x70, 0x03
#define RATE_100K { \
        0x10, RF_MODEM_MOD_TYPE_12_100K, \
        0x05, RF_MODEM_FREQ_DEV_0_1_100K, \
        0x0C, RF_MODEM_TX_RAMP_DELAY_8_100K, \
        0x0D, RF_MODEM_BCR_OSR_1_9_100K, \
        0x0B, RF_MODEM_AFC_GEAR_7_100K, \
        0x07, RF_MODEM_AGC_WINDOW_SIZE_3_100K, \
        0x0D, RF_MODEM_OOK_CNT1_9_100K, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_100K, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_100K, \
        0x10, RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_100K, \
        0x0B, RF_SYNTH_PFDCP_CPFF_7_100K, \
				0x00 \
}

// MOD_type: 3    Rsymb(sps): 200000    Fdev(Hz): 100000    RXBW(Hz): 150000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2    
// # WB filter 2 (BW = 412.25 kHz);  NB-filter 2 (BW = 412.25 kHz)
#define RF_MODEM_MOD_TYPE_12_200K 0x11, 0x20, 0x0C, 0x00, 0x03, 0x00, 0x07, 0x3D, 0x09, 0x00, 0x09, 0xC9, 0xC3, 0x80, 0x00, 0x1B
#define RF_MODEM_FREQ_DEV_0_1_200K 0x11, 0x20, 0x01, 0x0C, 0x4F
#define RF_MODEM_TX_RAMP_DELAY_8_200K 0x11, 0x20, 0x08, 0x18, 0x01, 0x00, 0x08, 0x03, 0x80, 0x00, 0x00, 0x20
#define RF_MODEM_BCR_OSR_1_9_200K 0x11, 0x20, 0x09, 0x22, 0x00, 0x4B, 0x06, 0xD3, 0xA0, 0x06, 0xD4, 0x02, 0x00
#define RF_MODEM_AFC_GEAR_7_200K 0x11, 0x20, 0x07, 0x2C, 0x00, 0x23, 0x8D, 0xA7, 0x00, 0xD3, 0xA0
#define RF_MODEM_AGC_WINDOW_SIZE_3_200K 0x11, 0x20, 0x03, 0x38, 0x11, 0x10, 0x10
#define RF_MODEM_OOK_CNT1_9_200K 0x11, 0x20, 0x09, 0x42, 0xA4, 0x03, 0xD6, 0x03, 0x01, 0x00, 0x01, 0x80, 0xFF
#define RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_200K 0x11, 0x21, 0x0C, 0x00, 0xFF, 0xC4, 0x30, 0x7F, 0xF5, 0xB5, 0xB8, 0xDE, 0x05, 0x17, 0x16, 0x0C
#define RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_200K 0x11, 0x21, 0x0C, 0x0C, 0x03, 0x00, 0x15, 0xFF, 0x00, 0x00, 0xFF, 0xC4, 0x30, 0x7F, 0xF5, 0xB5
#define RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_200K 0x11, 0x21, 0x0C, 0x18, 0xB8, 0xDE, 0x05, 0x17, 0x16, 0x0C, 0x03, 0x00, 0x15, 0xFF, 0x00, 0x00
#define RF_PA_MODE_4_200K 0x11, 0x22, 0x04, 0x00, 0x08, 0x7F, 0x00, 0x5D
#define RF_SYNTH_PFDCP_CPFF_7_200K 0x11, 0x23, 0x07, 0x00, 0x01, 0x05, 0x0B, 0x05, 0x02, 0x00, 0x03
#define RATE_200K { \
        0x10, RF_MODEM_MOD_TYPE_12_200K, \
        0x05, RF_MODEM_FREQ_DEV_0_1_200K, \
        0x0C, RF_MODEM_TX_RAMP_DELAY_8_200K, \
        0x0D, RF_MODEM_BCR_OSR_1_9_200K, \
        0x0B, RF_MODEM_AFC_GEAR_7_200K, \
        0x07, RF_MODEM_AGC_WINDOW_SIZE_3_200K, \
        0x0D, RF_MODEM_OOK_CNT1_9_200K, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE13_7_0_12_200K, \
        0x10, RF_MODEM_CHFLT_RX1_CHFLT_COE1_7_0_12_200K, \
        0x10, RF_MODEM_CHFLT_RX2_CHFLT_COE7_7_0_12_200K, \
				0x08, RF_PA_MODE_4_200K, \
        0x0B, RF_SYNTH_PFDCP_CPFF_7_200K, \
				0x00 \
}














#endif  /* RATE_CONFIG_H_ */

