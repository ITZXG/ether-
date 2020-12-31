//
//  Erc20Token.h
//  ethers
//
//  Created by thomasho on 2018/1/18.
//  Copyright © 2018年 Ethers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AddressETH.h"
#import "BigNumber.h"

@interface Erc20Token : NSObject

@property (nonatomic, strong) AddressETH       *address;
@property (nonatomic, strong) BigNumber     *balance;
@property (nonatomic, strong) NSString      *image;
@property (nonatomic, strong) NSNumber      *price;
@property (nonatomic, strong) NSNumber      *cnyPrice;
@property (nonatomic, strong) NSString      *symbol;
@property (nonatomic, strong) NSString      *name;

+ (Erc20Token *)tokenFromDictionary:(NSDictionary *)dic;
+ (Erc20Token *)erc20Token:(NSString *)address symbol:(NSString *)symbol;
- (NSDictionary*)dictionaryRepresentation;

@end
