/*
 * SamiFileGroupProperty.h
 * 
 * 
 */

#ifndef SamiFileGroupProperty_H_
#define SamiFileGroupProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiFileProperty.h"
#include "SamiProperty.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiFileGroupProperty: public SamiObject {
public:
    SamiFileGroupProperty();
    SamiFileGroupProperty(String* json);
    virtual ~SamiFileGroupProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFileGroupProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    IList* getPFiles();
    void setPFiles(IList* pFiles);

private:
    String* pType;
IList* pFiles;
};

} /* namespace Swagger */

#endif /* SamiFileGroupProperty_H_ */
