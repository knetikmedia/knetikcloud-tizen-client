/*
 * SamiImageGroupProperty.h
 * 
 * 
 */

#ifndef SamiImageGroupProperty_H_
#define SamiImageGroupProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiFileGroupProperty.h"
#include "SamiFileProperty.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiImageGroupProperty: public SamiObject {
public:
    SamiImageGroupProperty();
    SamiImageGroupProperty(String* json);
    virtual ~SamiImageGroupProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiImageGroupProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    IList* getPFiles();
    void setPFiles(IList* pFiles);

private:
    String* pType;
IList* pFiles;
};

} /* namespace Swagger */

#endif /* SamiImageGroupProperty_H_ */
