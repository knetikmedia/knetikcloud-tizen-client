#ifndef SamiDevicesApi_H_
#define SamiDevicesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
#include "SamiDeviceResource.h"
#include "SamiPageResource«DeviceResource».h"
#include "SamiResult.h"
#include "SamiSimpleUserResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiDevicesApi {
public:
  SamiDevicesApi();
  virtual ~SamiDevicesApi();

  SamiDeviceResource* 
  addDeviceUsersWithCompletion(IList* userResources, Integer* _id, void (* handler)(SamiDeviceResource*, SamiError*));
  SamiDeviceResource* 
  createDeviceWithCompletion(SamiDeviceResource* device, void (* handler)(SamiDeviceResource*, SamiError*));
  void 
  deleteDeviceWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  deleteDeviceUserWithCompletion(Integer* _id, Integer* userId, void(* handler)(SamiError*));
  void 
  deleteDeviceUsersWithCompletion(Integer* _id, String* filterId, void(* handler)(SamiError*));
  SamiDeviceResource* 
  getDeviceWithCompletion(Integer* _id, void (* handler)(SamiDeviceResource*, SamiError*));
  SamiPageResource«DeviceResource»* 
  getDevicesWithCompletion(String* filterMake, String* filterModel, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«DeviceResource»*, SamiError*));
  SamiDeviceResource* 
  updateDeviceWithCompletion(SamiDeviceResource* device, Integer* _id, void (* handler)(SamiDeviceResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiDevicesApi_H_ */
