/*
 * SamiThe definition of an activity parameters: ex: difficulty level.h
 * 
 * 
 */

#ifndef SamiThe definition of an activity parameters: ex: difficulty level_H_
#define SamiThe definition of an activity parameters: ex: difficulty level_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSettingOption.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiThe definition of an activity parameters: ex: difficulty level: public SamiObject {
public:
    SamiThe definition of an activity parameters: ex: difficulty level();
    SamiThe definition of an activity parameters: ex: difficulty level(String* json);
    virtual ~SamiThe definition of an activity parameters: ex: difficulty level();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiThe definition of an activity parameters: ex: difficulty level* fromJson(String* obj);

    Boolean* getPAdvancedOption();
    void setPAdvancedOption(Boolean* pAdvanced_option);
    String* getPDefaultValue();
    void setPDefaultValue(String* pDefault_value);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPKey();
    void setPKey(String* pKey);
    String* getPName();
    void setPName(String* pName);
    IList* getPOptions();
    void setPOptions(IList* pOptions);

private:
    Boolean* pAdvanced_option;
String* pDefault_value;
String* pDescription;
String* pKey;
String* pName;
IList* pOptions;
};

} /* namespace Swagger */

#endif /* SamiThe definition of an activity parameters: ex: difficulty level_H_ */
