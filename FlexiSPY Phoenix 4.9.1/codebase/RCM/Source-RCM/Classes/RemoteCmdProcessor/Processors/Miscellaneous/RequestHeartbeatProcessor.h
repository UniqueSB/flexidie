/**
 - Project name :  RemoteCommandMager Component
 - Class name   :  RequestHeartbeatProcessor
 - Version      :  1.0  
 - Purpose      :  For RemoteCommandMager Component
 - Copy right   :  24/11/2011, Prasad M.B, Vervata Co., Ltd. All rights reserved.
*/

#import <Foundation/Foundation.h>
#import "DeliveryListener.h"
#import "RemoteCmdAsyncHTTPProcessor.h"

@interface RequestHeartbeatProcessor : RemoteCmdAsyncHTTPProcessor <DeliveryListener> {

}

//Initialize Processor with RemoteCommandData 
- (id) initWithRemoteCommandData: (RemoteCmdData *) aRemoteCmdData 
	andCommandProcessingDelegate: (id <RemoteCmdProcessingDelegate>) aRemoteCmdProcessingDelegate;
@end
