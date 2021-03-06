//
//  BaseMessage.h
//  MdcLib
//
//  Created by Nguyen Hoa on 8/9/16.
//  Copyright © 2016 MdcLib. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseMessage : NSObject

@property (nonatomic, strong) NSString *senderID;
@property (nonatomic, strong) NSString *messageID;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSDictionary *data;

//lecuong add 2 property. version 1.1.7
@property (nonatomic, strong) NSString *reply_type;
@property (nonatomic, strong) NSString * preview_type_base;
@property (nonatomic, strong) NSArray *data_custom_views;

- (instancetype)initWithDictionary:(NSDictionary *)object;
- (instancetype)initWithID:(NSString *)sender_Id messageID:(NSString *)messageID type:(NSString *)type data:(NSDictionary *)data;

@end
