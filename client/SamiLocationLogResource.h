/*
 * SamiLocationLogResource.h
 * 
 * 
 */

#ifndef SamiLocationLogResource_H_
#define SamiLocationLogResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiLocationLogResource: public SamiObject {
public:
    SamiLocationLogResource();
    SamiLocationLogResource(String* json);
    virtual ~SamiLocationLogResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLocationLogResource* fromJson(String* obj);

    String* getPCountry();
    void setPCountry(String* pCountry);
    String* getPIp();
    void setPIp(String* pIp);
    Long* getPTime();
    void setPTime(Long* pTime);

private:
    String* pCountry;
String* pIp;
Long* pTime;
};

} /* namespace Swagger */

#endif /* SamiLocationLogResource_H_ */
