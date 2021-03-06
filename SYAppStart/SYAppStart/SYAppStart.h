//
//  SYAppStart.h version:0.7
//  FEShareLib
//
//  Created by 余书懿 on 13-5-25.
//  Copyright (c) 2013年 珠海飞企. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SYAppStart : NSObject


/**
 *	@brief	显示App启动插画 保持与启动时效果的一致 自动匹配iPhone 5尺寸的启动图片 
            请在首个Controller 的 viewWillAppear 里面执行
 *
 */
+ (void)show;

/**
 *	@brief	以默认动画效果隐藏App启动图片 
            请在首个Controller 的 viewWillAppear 里面执行 viewDidAppear 里面执行
 */
+ (void)hide;

/**
 *	@brief	以自定义隐藏动画的方式隐藏App启动图片
            请在首个Controller 的 viewWillAppear 里面执行 viewDidAppear 里面执行
 */
+ (void)hideWithCustomBlock:(void(^)(UIImageView *imageView))block;


/**
 *	@brief	清理,只在自定义动画时才需要调用
 */
+ (void)clear;


@end
