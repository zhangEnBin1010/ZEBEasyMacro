//
//  LZXHelper.h
//  Connotation
//
//  Created by LZXuan on 14-12-20.
//  Copyright (c) 2014年 LZXuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LZXHelper : NSObject
//把一个秒字符串 转化为真正的本地时间
//@"1419055200" -> 转化 日期字符串
+ (NSString *)dateStringFromNumberTimer:(NSString *)timerStr;
//根据字符串内容的多少  在固定宽度 下计算出实际的行高
+ (CGFloat)textHeightFromTextString:(NSString *)text width:(CGFloat)textWidth fontSize:(CGFloat)size;
//动态 计算宽度
//根据字符串的实际内容的多少 在固定的行高和字体的大小，动态的计算出实际的宽度
+ (CGFloat)textWidthFromTextString:(NSString *)text height:(CGFloat)textHeight fontSize:(CGFloat)size;
//获取 当前设备版本
+ (double)getCurrentIOS;
//获取当前设备屏幕的大小
+ (CGSize)getScreenSize;

//获得当前系统时间到指定时间的时间差字符串,传入目标时间字符串和格式
+(NSString*)stringNowToDate:(NSString*)toDate formater:(NSString*)formatStr;
//调整label行间距
+ (NSMutableAttributedString *)setLineSpace:(NSString *)labelText lineSpace:(float)lineSpace;
//获取 一个文件 在沙盒沙盒Library/Caches/ 目录下的路径
+ (NSString *)getFullPathWithFile:(NSString *)urlName;
//检测 缓存文件 是否超时
+ (BOOL)isTimeOutWithFile:(NSString *)filePath timeOut:(double)timeOut;
//字符串转字典
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
+ (BOOL) validateIdentityCard: (NSString *)identityCard;
//银行卡
+ (BOOL) validateBankCardNumber: (NSString *)bankCardNumber;
//银行卡后四位
+ (BOOL) validateBankCardLastNumber: (NSString *)bankCardNumber;
//邮箱
+ (BOOL) validateEmail:(NSString *)email;
//ios 判断textFiled中输入的字符是不是数字
+ (BOOL)isPureInt:(NSString*)string;
//设置label字体不同颜色
+ (NSMutableAttributedString *)updageBanlence:(NSString *)tmpStr color:(UIColor *)color location:(NSInteger)location;
//通过颜色来生成一个纯色图片
+ (UIImage *)buttonImageFromColor:(UIColor *)color;
//查找设备属于哪种设备
+ (BOOL)checkDevice:(NSString*)name;

//查找当前设备的机型
+ (NSString*)deviceString;

//检查版本

//今天星期几
+ (NSDateComponents *)formattedDateDescritionComponents;


@end





