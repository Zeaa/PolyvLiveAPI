//
//  PLVLiveConfig.h
//  PLVLiveSDK
//
//  Created by ftao on 24/10/2017.
//  Copyright © 2017 easefun. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 日志等级
typedef NS_ENUM(NSUInteger, PLVLiveLogLevel) {
    /// 无 LOG 输出
    k_PLV_LIVE_LOG_NULL         = 0,
    /// ERROR 等级
    k_PLV_LIVE_LOG_ERROR        = 1,
    /// INFO 等级
    k_PLV_LIVE_LOG_INFO         = 2,
    /// DEBUG 等级
    k_PLV_LIVE_LOG_DEBUG        = 3,
};

/**
 直播 SDK 配置文件
 */
@interface PLVLiveConfig : NSObject

/// polyv 用户参数
@property (nonatomic, strong, readonly) NSString *appId;
/// polyv 用户参数
@property (nonatomic, strong, readonly) NSString *appSecret;

/// 播放器id
@property (nonatomic, strong, readonly) NSString *playerId;

/**
 Live API 版本信息
 */
+ (NSString *)liveApiVersion;

/**
 设置播放器版本信息
 */
+ (void)setPlayerVersion:(NSString *)playerVersion;

/**
 播放器版本，调用+setPlayerVersion:方法后生产，否则返回Live API版本
 */
+ (NSString *)playerVersion;

/**
 LIVE SDK CONFIG 单例类
 */
+ (instancetype)sharedInstance;

/**
 用户参数：Polyv直播后台“API设置“中appId、appSecret参数
 */
+ (instancetype)liveConfigWithAppId:(NSString *)appId appSecret:(NSString *)appSecret;

/**
 重置播放器 Id
 */
- (void)resetPlayerId;

#pragma mark - SDK 日志等级设置

/**
 设置Polyv Live SDK LOG等级
 
 @param logLevel 默认 k_PLV_LIVE_LOG_INFO
 */
+ (void)setLogLevel:(PLVLiveLogLevel)logLevel;

/**
 SDK 日志等级
 */
+ (PLVLiveLogLevel)logLevel;

@end
