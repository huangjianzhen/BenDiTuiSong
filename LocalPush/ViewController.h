//
//  ViewController.h
//  LocalPush
//
//  Created by mac mini on 16/1/6.
//  Copyright © 2016年 mac mini. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

//设置本地通知
+(void)registerLocalNotification:(NSInteger)alertTime;

+(void)cancelLocalNotificationWithKey:(NSString *)key;


@end

