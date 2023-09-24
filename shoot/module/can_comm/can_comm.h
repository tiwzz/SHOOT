/**
 * @file can_comm.h
 * @author yuanluochen
 * @brief 多设备通信模块，主要用于控制板之间的通信，使用can总线实现
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef CAN_PACKEET_CONNECTION_H
#define CAN_PACKEET_CONNECTION_H
#include "struct_typedef.h"

//最大传输数据量 unit byte
#define CAN_COMM_MAX_BUFSIZE 60
//校验数据量 unit byte, 保存帧头帧尾 + + 数据长度位 + crc校验和
#define CAN_COMM_OFFSET_BUFSIZE 4

//帧头
#define CAN_COMM_HEADER 0X73
//帧尾
#define CAN_COMM_TAIL 0x65

//can设备单次发送最大值
#define CAN_COMM_SINGLE_TRANSMIT_MAX_SIZE 8

/**
 * @brief can通信状态
 * 
 */
typedef enum
{
    CAN_COMM_START = 0,      // 开始通信
    CAN_COMM_CONNECTING = 1, // 通信中
    CAN_COMM_END = 2,        // 通信结束
} can_comm_statue_e;


/**
 * @brief can设备通信通信结构体
 * 
 */
typedef struct
{
    //can设备 
    // 发送部分
    uint8_t transmit_data_len;                                            // 发送数据长度
    uint8_t transmit_buf_len;                                             // 发送缓冲区数据长度 该长度包括发送数据长度 帧头帧尾 数据长度位 校验和
    uint8_t transmit_buf[CAN_COMM_MAX_BUFSIZE + CAN_COMM_OFFSET_BUFSIZE]; // 发送数据区, 大小为 CAN_COMM_MAX_BUFSIZE + CAN_COMM_OFFSET_BUFSIZE

    // 接收部分
    uint8_t receive_data_len;                                            // 接收数据长度
    uint8_t receive_buf_len;                                             // 接收缓冲区数据长度 该长度包括发送数据长度 帧头帧尾 数据长度位 校验和
    uint8_t receive_buf[CAN_COMM_MAX_BUFSIZE + CAN_COMM_OFFSET_BUFSIZE]; // 接收数据区, 大小为 CAN_COMM_MAX_BUFSIZE + CAN_COMM_OFFSET_BUFSIZE

} can_comm_t;

/**
 * @brief can设备通信函数 
 * 
 * @param can_comm_transmit can设备通信结构体 
 * @param data 发送数据指针
 * @param data_len 数据长度
 */
void can_comm_transmit(can_comm_t *can_comm_transmit, uint8_t* data, uint8_t data_len);

#endif // !CAN_PACKEET_CONNECTION_H
