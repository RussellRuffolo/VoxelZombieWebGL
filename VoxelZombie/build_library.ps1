dotnet clean "ZombieLib\" 
dotnet build "ZombieLib\" 
$dependencies = "Client\Assets\Dependencies\"
if (!(Test-Path $dependencies) ){mkdir $dependencies}
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.dll"  $dependencies
cp "ZombieLib\bin\Debug\netstandard2.0\ZombieLib.pdb" $dependencies
