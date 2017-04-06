/*
 * SamiSettingOption.h
 * 
 * 
 */

#ifndef SamiSettingOption_H_
#define SamiSettingOption_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiSettingOption: public SamiObject {
public:
    SamiSettingOption();
    SamiSettingOption(String* json);
    virtual ~SamiSettingOption();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSettingOption* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);
    String* getPValue();
    void setPValue(String* pValue);

private:
    String* pName;
String* pValue;
};

} /* namespace Swagger */

#endif /* SamiSettingOption_H_ */
