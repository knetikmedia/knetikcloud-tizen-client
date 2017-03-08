/*
 * SamiSelectedSettingResource.h
 * 
 * 
 */

#ifndef SamiSelectedSettingResource_H_
#define SamiSelectedSettingResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiSelectedSettingResource: public SamiObject {
public:
    SamiSelectedSettingResource();
    SamiSelectedSettingResource(String* json);
    virtual ~SamiSelectedSettingResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSelectedSettingResource* fromJson(String* obj);

    String* getPKey();
    void setPKey(String* pKey);
    String* getPKeyName();
    void setPKeyName(String* pKey_name);
    String* getPValue();
    void setPValue(String* pValue);
    String* getPValueName();
    void setPValueName(String* pValue_name);

private:
    String* pKey;
String* pKey_name;
String* pValue;
String* pValue_name;
};

} /* namespace Swagger */

#endif /* SamiSelectedSettingResource_H_ */
