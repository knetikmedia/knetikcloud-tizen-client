/*
 * SamiSampleCountriesResponse.h
 * 
 * 
 */

#ifndef SamiSampleCountriesResponse_H_
#define SamiSampleCountriesResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCountry.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiSampleCountriesResponse: public SamiObject {
public:
    SamiSampleCountriesResponse();
    SamiSampleCountriesResponse(String* json);
    virtual ~SamiSampleCountriesResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSampleCountriesResponse* fromJson(String* obj);

    IList* getPVendorId1();
    void setPVendorId1(IList* pVendor_id1);
    IList* getPVendorId2();
    void setPVendorId2(IList* pVendor_id2);

private:
    IList* pVendor_id1;
IList* pVendor_id2;
};

} /* namespace Swagger */

#endif /* SamiSampleCountriesResponse_H_ */
